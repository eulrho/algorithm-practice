// Box of Bricks
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, set=1;
	while (true) {
		cin >> n;
		if (n == 0) break ;

		int sum=0, arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sum /= n;

		int cnt=0;
		for (int i=0; i<n; i++)
			cnt += max(0, arr[i] - sum);

		cout << "Set #" << set << '\n';
		cout << "The minimum number of moves is " << cnt << "." << "\n\n";
		set++;
	}
	return (0);
}