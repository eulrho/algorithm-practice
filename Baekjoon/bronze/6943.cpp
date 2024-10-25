// Slot Machines
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int coin, number[3], timing[3] = {35, 100, 10}, reward[3] = {30, 60, 9};
	cin >> coin;

	for (int i=0; i<3; i++) cin >> number[i];

	int cnt=0;
	while (coin) {
		int i=-1;
		while (coin && ++i <= 2) {
			cnt++;
			coin--;
			if (number[i] >= timing[i]) continue;
			if (++(number[i]) % timing[i] == 0)
				coin += reward[i];
			number[i] %= timing[i];
		}
	}
	cout << "Martha plays " << cnt << " times before going broke.";
	return (0);
}
