// 최솟값 찾기
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

typedef long long ll;

int main()
{
	fast;
	ll n, l, a, start;
	priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > pq;

	cin >> n >> l;
	start = l;
	for(ll i=1; i<=n; i++) {
		cin >> a;
		pq.push(make_pair(a, i));
		while (!pq.empty() && pq.top().second < i - l + 1)
			pq.pop();
		cout << pq.top().first << ' ';
	}
	return 0;
}