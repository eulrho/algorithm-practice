// 코드 처리하기
#include <iostream>
#include <string>

using namespace std;

string solution(string code) {
    string answer = "";
    int size = code.length();
    int mode = 0;
    for(int i=0; i<size; i++){
        if (mode==0) {
            if (code[i] == '1') mode = 1;
            else if (i % 2 == 0) answer.push_back(code[i]);
        }
        else {
            if (code[i] == '1') mode = 0;
            else if (i % 2 != 0) answer.push_back(code[i]);
        }
    }
    if (answer == "") answer = "EMPTY";
    return answer;
}

int main() {
    string code, result;
    code = "abc1abc1abc";
    result = solution(code);
    cout << result;
}