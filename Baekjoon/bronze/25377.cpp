// 빵
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int a, b, time=-1;
	for (int i=0; i<n; i++) {
		cin >> a >> b;
		if (a <= b) {
			if (time == -1 || time > b) time = b;
		}
	}
	cout << time;
	return (0);
}