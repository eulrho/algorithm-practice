// 치킨댄스를 추는 곰곰이를 본 임스 2
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	string x;
	int cnt=0;
	for (int i=0; i<n; i++) {
		cin >> x;
		if (stoi(x.substr(2)) <= 90) cnt++;
	}
	cout << cnt;
	return (0);
}