// 달리기 경주
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    int size_c = callings.size();
    int size_p = players.size();
    string temp;
    unordered_map<string, int> hash1;

    for (int i = 0; i < size_p; i++)
        hash1.insert(make_pair(players[i], i));
    for(int i=0; i < size_c; i++){
        temp = players[hash1[callings[i]] - 1];
        swap(players[hash1[callings[i]]], players[hash1[callings[i]] - 1]);
        hash1[callings[i]]--;
        hash1[temp]++;
    }
    answer = players;
    return answer;
}

int main() {
    vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings = {"kai", "kai", "mine", "mine"};
    vector<string> result = solution(players, callings);

    for (auto r : result)
        cout << r << " ";
    return (0);
}
