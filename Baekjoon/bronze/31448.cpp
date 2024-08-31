// Ascending hike
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, front = -1, back, sum=0, max=0;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> back;
		if (front == -1) {
			front = back;
			continue ;
		}
		if (front > back) {
			max = max < sum ? sum : max;
			sum = 0;
		}
		else
			sum += back - front;
		front = back;
	}
	max = max < sum ? sum : max;
	cout << max;
	return (0);
}