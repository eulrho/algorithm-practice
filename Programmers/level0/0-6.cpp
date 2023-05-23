// 대소문자 바꿔서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int size = str.size();
    for(int i=0; i<size; i++){
        if(str[i]<=90) str[i] += 32;
        else str[i] -= 32;
    }
    cout << str;
    return 0;
}