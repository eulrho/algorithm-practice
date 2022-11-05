// 좌표 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    int n, x, y; cin >> n;
    vector<pair<int, int>> num;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        num.push_back(pair<int, int>(x, y));
    }

    sort(num.begin(), num.end());

    for(int i=0; i<n; i++){
        cout << num[i].first << " " << num[i].second << "\n";
    }

    return 0;
}
