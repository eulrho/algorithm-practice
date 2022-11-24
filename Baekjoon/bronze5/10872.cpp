// 팩토리얼
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, res=1;
    cin >> n;
    for(int i=1; i<=n; i++){
        res *= i;
    }

    cout << res;

    return 0;
}