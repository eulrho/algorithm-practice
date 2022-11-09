// 행복은 성적순이 아니잖아요.
#include <iostream>

using namespace std;

int main() {
    int t, l, s, n, k, m, v;
    cin >> t;
    bool pass = true, aplus = true;
    for (int i = 0; i < t; i++) {
        cin >> l >> s >> n >> k >> m;
        for (int j = 0; j < k; j++) {
            cin >> v;
            if (v < m) pass = false;
        }
        if (((float)s / l) * 100 > n || pass == false) aplus = false;
    }
    if (aplus) cout << 1;
    else cout << 0;
    return 0;
}