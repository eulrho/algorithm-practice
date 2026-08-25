// 가장 많이 받은 선물
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    map<string, int> names;
    int idx = 0;
    for (auto f : friends) names[f] = idx++;
    int info[100][100] = {0};
    int score[100] = {0};
    for (auto g : gifts) {
        int delimiter = g.find(' ');
        int sender = names[g.substr(0, delimiter)];
        int receiver = names[g.substr(delimiter + 1)];
        info[sender][receiver]++;
        score[sender]++;
        score[receiver]--;
    }
    
    int size = (int)friends.size();
    int prediction[100] = {0};
    for (int i=0; i<size-1; i++) {
        int tmp = 0;
        for (int j=i+1; j<size; j++) {
            if (info[names[friends[i]]][names[friends[j]]] > info[names[friends[j]]][names[friends[i]]])
                prediction[names[friends[i]]]++;
            else if (info[names[friends[i]]][names[friends[j]]] < info[names[friends[j]]][names[friends[i]]])
                prediction[names[friends[j]]]++;
            else if (score[names[friends[i]]] > score[names[friends[j]]])
                prediction[names[friends[i]]]++;
            else if (score[names[friends[i]]] < score[names[friends[j]]])
                prediction[names[friends[j]]]++;
        }
    }

    for (int i=0; i<size; i++) answer = max(answer, prediction[i]);
    return answer;
}

int main() {
    vector<string> friends = {"muzi", "ryan", "frodo", "neo"};
    vector<string> gifts = {"muzi frodo", "muzi frodo", "ryan muzi", "ryan muzi", "ryan muzi", "frodo muzi", "frodo ryan", "neo muzi"};
    cout << solution(friends, gifts);
    return 0;
}