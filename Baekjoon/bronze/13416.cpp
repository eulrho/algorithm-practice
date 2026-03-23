// 주식 투자
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	int n;
	for (int i=0; i<t; i++) {
		cin >> n;
		int sum = 0, num;
		for (int j=0; j<n; j++) {
			int tmp = 0;
			for (int k=0; k<3; k++) {
				cin >> num;
				tmp = max(tmp, num);
			}
			sum += tmp;
		}
		cout << sum << '\n';
	}
	return (0);
}