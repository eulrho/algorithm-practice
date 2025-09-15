// 가위 바위 보?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	int n;
	char p1, p2;
	for (int i=0; i<t; i++) {
		cin >> n;
		int cnt1=0, cnt2=0;
		for (int j=0; j<n; j++) {
			cin >> p1 >> p2;
			if (p1 == 'R' && p2 == 'P' || p1 == 'S' && p2 == 'R' || p1 == 'P' && p2 == 'S') cnt2++;
			else if (p1 == 'R' && p2 == 'S' || p1 == 'S' && p2 == 'P' || p1 == 'P' && p2 == 'R') cnt1++;
		}
		if (cnt1 > cnt2) cout << "Player 1\n";
		else if (cnt1 < cnt2) cout << "Player 2\n";
		else cout << "TIE\n";
	}
	return (0);
}