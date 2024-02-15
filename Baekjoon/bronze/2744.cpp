// 대소문자 바꾸기
#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    int len = word.length();

    for (int i = 0; i < len; i++) {
        if (word[i] <= 90) word[i] += 32;
        else word[i] -= 32;
    }

    cout << word;

    return 0;
}