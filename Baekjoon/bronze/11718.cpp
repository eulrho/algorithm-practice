// 그대로 출력하기
#include <iostream>

using namespace std;

int main() {

    string str;
    for(int i=0; i<100; i++){
        getline(cin, str);
        cout << str << "\n";
    }

    return 0;
}