// 나머지가 1이 되는 수 찾기
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = n;
    for(int i=n; i>0; i--){
        if(n%i == 1 && answer > i) answer = i;
    }
    return answer;
}

int main(){
    int n = 12;
    int result = solution(n);

    cout << result;
    return 0;
}