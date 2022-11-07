// Hashing
#include <iostream>
#define M 1234567891
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    long long res = 0, r=1;
    string str;
    cin >> l >> str;

    for (int i = 0; i < l; i++) {
        res = (res + (str[i] - 96) * r) % M;
        r = (r * 31) % M;
    }

    cout << res;

    return 0;
}