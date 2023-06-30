// 공배수
#include <iostream>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if (number % n == 0 && number % m == 0) answer = 1;
    else answer = 0;
    return answer;
}

int main(){
    int number, n, m, result;
    number = 55, n = 10, m = 5;
    result = solution(number, n, m);
    cout << result;
}