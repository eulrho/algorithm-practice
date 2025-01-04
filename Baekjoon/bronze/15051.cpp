// Máquina de café
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a[3];
	for (int i=0; i<3; i++) cin >> a[i];

	int time[3];
	time[0] = a[1] * 2 + a[2] * 4;
	time[1] = a[0] * 2 + a[2] * 2;
	time[2] = a[0] * 4 + a[1] * 2;

	cout << min(time[0], min(time[1], time[2]));
	return (0);
}