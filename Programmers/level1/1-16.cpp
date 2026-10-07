// [PCCP 기출문제] 1번 / 동영상 재생기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int time_to_int(string& time) {
    string min = time.substr(0, 2);
    string sec = time.substr(3);
    return stoi(min) * 60 + stoi(sec);
}

string int_to_time(int num) {
    string min = to_string(num / 60);
    string sec = to_string(num % 60);
    if (min.size() == 1) min = "0" + min;
    if (sec.size() == 1) sec = "0" + sec;
    return min + ":" + sec;
}

void check_op(int op_s, int op_e, int &p) {
    if (p >= op_s && p < op_e) p = op_e;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int p = time_to_int(pos);
    int op_s = time_to_int(op_start);
    int op_e = time_to_int(op_end);
    int v = time_to_int(video_len);
    
    check_op(op_s, op_e, p);
    for (int i=0; i<(int)commands.size(); i++) {
        if (commands[i] == "next") p = min(p + 10, v);
        else p = max(p - 10, 0);
        check_op(op_s, op_e, p);
    }
    answer = int_to_time(p);
    return answer;
}

int main() {
    cout << solution("10:55", "00:05", "00:15", "06:55", vector<string>{"prev", "next", "next"});
    return 0;
}