// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    vector<int> sample = { 1, 1, 2, 2, 2, 8 };
    vector<int> res(6);
    for (int i = 0; i < 6; i++) {
        cin >> count;
        res[i] = sample[i] - count;
    }

    for (int r : res) cout << r << ' ';
    
    return 0;
}