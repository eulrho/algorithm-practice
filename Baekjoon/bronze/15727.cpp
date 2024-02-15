// 조별과제를 하려는데 조장이 사라졌다
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int l; cin >> l;
    cout << ceil((float)l/5);
    return 0;
}