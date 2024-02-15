// 손익분기점
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, count = 0;
    cin >> a >> b >> c;

    if (b >= c) cout << "-1";
    else {
        cout << a / (c - b) + 1;
    }
    return 0;
}