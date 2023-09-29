// 개인정보 수집 유효기간
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> terms_map;
    int y, m, d, num, diff;

    y = stoi(today.substr(0, 4));
    m = stoi(today.substr(5, 2));
    d = stoi(today.substr(8, 2));
    for (auto t : terms)
        terms_map.insert(make_pair(t[0], stoi(t.substr(2))));
    for (int i = 0; i < privacies.size(); i++)
    {
        num = 0;
        diff = y - stoi(privacies[i].substr(0, 4));
        if (diff > 0)
            num += diff * 12 * 28;
        diff = m - stoi(privacies[i].substr(5, 2));
        if (diff > 0)
            num += diff * 28;
        else if (diff < 0)
            num += (diff + 12) * 28 - (12 * 28);
        diff = d - stoi(privacies[i].substr(8, 2));
        num += diff;
        if (num >= terms_map[privacies[i][11]] * 28)
            answer.push_back(i + 1);
    }
    return answer;
}

int main()
{
    string today = "2020.01.01";
    vector<string> terms = {"Z 3", "D 5"};
    vector<string> privacies = {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"};
    vector<int> result = solution(today, terms, privacies);

    for (auto r : result)
        cout << r;
    return (0);
}