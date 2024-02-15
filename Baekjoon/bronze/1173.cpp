// 운동
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, m, M, T, R, X, resTime = 0, exTime = 0;
    cin >> N >> m >> M >> T >> R;
    X = m;
    if (m > M - T) cout << -1;
    else {
        while (exTime < N) {
            if (X <= M - T) {
                X += T;
                exTime++;
            } else {
                X -= R;
                resTime++;
                if (X < m) X = m;
            }
        }
        cout << resTime+exTime;
    }
    return 0;
}