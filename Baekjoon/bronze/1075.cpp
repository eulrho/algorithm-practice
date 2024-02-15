// 나누기
#include <iostream>

using namespace std;

int main() {

    int n, f, temp; cin >> n >> f;
    n -= n%100;
    for(int i=0; i<=99; i++){
        temp = n;
        temp += i;
        if(temp % f == 0){
            printf("%02d", i);
            break;
        }
    }

    return 0;
}
