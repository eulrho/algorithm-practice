// 요세푸스 문제0
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, len, idx, count=0;
    cin >> n >> k;

    vector<int> josephus(n);
    iota(josephus.begin(), josephus.end(), 1);

    cout << "<";
    len=josephus.size();
    idx=k-1;
    while(len>0){
        if (idx>=len) idx -= len;
        else {
            if (len == 1) cout << josephus[idx] << ">";
            else cout << josephus[idx] << ", ";
            josephus.erase(josephus.begin() + idx);
            idx += (k - 1);
            len--;
        }
    }

    return 0;
}