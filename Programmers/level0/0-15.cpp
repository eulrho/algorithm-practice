// 옹알이 (1)
#include <string>
#include <vector>
#include <set>

using namespace std;

bool check_str(set<string> &s_str, string &str) {
    int size = (int)str.size(), idx = 0;
    while (idx < size) {
        if (s_str.find(str.substr(idx, 2)) != s_str.end())
            idx += 2;
        else if (s_str.find(str.substr(idx, 3)) != s_str.end())
            idx += 3;
        else return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    
    set<string> s_str = {"aya", "ye", "woo", "ma"};
    for (auto b : babbling) {
        int size = b.size();
        if (size == 1) continue ;
        if (check_str(s_str, b)) answer++;
    }
    return answer;
}