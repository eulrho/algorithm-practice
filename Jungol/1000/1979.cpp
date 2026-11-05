// The Average
#include <iostream>
#include <queue>
#include <functional>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    int n1, n2, n; cin >> n1 >> n2 >> n;
    priority_queue<long long, vector<long long>, less<long long>> pq1;
    priority_queue<long long, vector<long long>, greater<long long>> pq2;
    vector<long long> v;
    long long num;
    long long res = 0;
    for (int i=0; i<n; i++) {
        cin >> num;
        pq1.push(num);
    }
    for (int i=0; i<n; i++) {
        long long tmp = pq1.top();
        pq1.pop();
        if (i >= n1) pq2.push(tmp);
    }
    for (int i=0; i<n-n1; i++) {
        long long tmp = pq2.top();
        pq2.pop();
        if (i >= n2) res += tmp;
    }
    res /= (n-n1-n2);
    cout << res;
    return 0;
}