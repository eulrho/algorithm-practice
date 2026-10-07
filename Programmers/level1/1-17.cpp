// 성격 유형 검사하기
#include <string>
#include <vector>
#include <map>

using namespace std;

string types[] = {"RT", "CF", "JM", "AN"};

void fill_map(map<char, int>& total) {
    for (int i=0; i<4; i++) {
        total[types[i][0]] = 0;
        total[types[i][1]] = 0;
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> total;
    fill_map(total);
    
    int size = (int)survey.size();
    for (int i=0; i<size; i++) {
        if (choices[i] <= 3) total[survey[i][0]] += 4 - choices[i];
        else if (choices[i] >= 5) total[survey[i][1]] += choices[i] - 4;
    }
    for (int i=0; i<4; i++) {
        if (total[types[i][0]] >= total[types[i][1]]) answer += types[i][0];
        else answer += types[i][1];
    }
    return answer;
}