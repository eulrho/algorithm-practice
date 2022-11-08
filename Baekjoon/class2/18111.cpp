// 마인크래프트
#include <iostream>
#include <vector>

#define TIME_MAX 128000001
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, l, min = 257, max = 0;
    int b, time = TIME_MAX, tmp, height = 0, count;

    cin >> n >> m >> b;
    vector<int> land[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> l;
            if (l < min) min = l;
            if (l > max) max = l;
            land[i].push_back(l);
        }
    }

    for (int i = min; i <= max; i++) {
        count = b;
        tmp = 0;
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < m; j++) {
                if (i > land[k][j]) {
                    count -= (i - land[k][j]);
                    tmp += (i - land[k][j]);
                } else if (i < land[k][j]) {
                    count += (land[k][j] - i);
                    tmp += (land[k][j] - i) * 2;
                }
            }
        }
        if (count >= 0) {
            if (tmp < time) {
                time = tmp;
                height = i;
            } else if (tmp == time) {
                height = (i > height) ? i : height;
            }
        }
    }
    if (time == TIME_MAX) time = 0;
    cout << time << " " << height;

    return 0;
}