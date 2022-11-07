// 좌표 정렬하기2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> n1, pair<int, int> n2){
    if (n1.second==n2.second) return n1.first<n2.first;
    else return n1.second<n2.second;
}

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    int n, x, y; cin >> n;
    vector<pair<int, int>> num;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        num.push_back(pair<int, int>(x, y));
    }

    sort(num.begin(), num.end(), cmp);

    for(int i=0; i<n; i++){
        cout << num[i].first << " " << num[i].second << "\n";
    }

    return 0;
}
