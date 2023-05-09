// n의 배수
#include <iostream>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    if(num%n!=0) answer = 0;
    else answer = 1;
    return answer;
}

int main(){
    int num = 98, n = 2;
    cout << solution(num, n);
}