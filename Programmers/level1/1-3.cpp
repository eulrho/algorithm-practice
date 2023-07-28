// 문자열을 정수로 바꾸기
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int integer_to_string(string s, int n){
    int size = s.length();
    int result=0, digit=size-n-1;
    for(int i=n; i<size; i++){
        result += (s[i]-48)*pow(10,digit--);
    }
    return result;
}
int solution(string s) {
    int answer = 0;
    if (s[0] == '-') answer = (-1)*integer_to_string(s, 1);
    else if (s[0] == '+') answer = integer_to_string(s, 1);
    else answer = integer_to_string(s, 0);
    return answer;
}

int main() {
    string s = "4";
    int result = solution(s);

    cout << result;
    return 0;
}
