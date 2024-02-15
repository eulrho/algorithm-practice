// 분산처리
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, computerArray[4], temp, count;
    cin >> t;

    for (int i = 0; i < t; i++) {
        temp = 1;
        cin >> a >> b;
        for (int j = 0; j < 4; j++) {
            temp *= a;
            if (temp % 10 == 0) computerArray[j] = 10;
            else computerArray[j] = temp % 10;
        }

        if (b % 4 == 0) count = 3;
        else count = b % 4 - 1;

        cout << computerArray[count] << "\n";
    }

    return 0;
}