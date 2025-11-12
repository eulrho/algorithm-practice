// 해밍 거리
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	string a, b;
	for (int i=0; i<t; i++) {
		cin >> a >> b;
		int cnt = 0;
		for (int j=0; j<(int)a.size(); j++) {
			if (a[j] != b[j]) cnt++;
		}
		cout << "Hamming distance is " << cnt << ".\n";
	}
	return (0);
}