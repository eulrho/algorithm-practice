// Fifty Coats of Gray
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	while (true) {
		int arr[6];

		int end_cnt=0;
		for (int i=0; i<6; i++) {
			cin >> arr[i];
			if (arr[i] == 0) end_cnt++;
		}
		if (end_cnt == 6) break ;

		int target_area = arr[1] * arr[3] * 2 + arr[2] * arr[3] * 2 + arr[1] * arr[2];
		int w, h;
		for (int i=0; i<arr[5]; i++) {
			cin >> w >> h;
			target_area -= w * h;
		}
		cout << ceil((double)target_area * arr[0] / arr[4]) << '\n';
	}
	return (0);
}