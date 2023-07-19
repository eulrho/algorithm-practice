// 수 조작하기 1
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    int size = control.size();
    for(int i=0; i<size; i++){
        if(control[i]=='w') answer++;
        else if(control[i]=='s') answer--;
        else if(control[i]=='d') answer+=10;
        else answer-=10;
    }

    return answer;
}

int main(){
    int n = 0, result;
    string control = "wsdawsdassw";
    result = solution(n, control);
    cout << result;
}