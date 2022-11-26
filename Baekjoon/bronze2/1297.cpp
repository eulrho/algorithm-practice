// TV 크기
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d, h, w, realH, realW;;
    cin >> d >> h >> w;
    float calD = sqrt(h * h + w * w);
    realH = (d*h)/calD;
    realW = (d*w)/calD;

    cout << realH << " " << realW;

    return 0;
}