// Good Grass
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int arr[101][101];

int main()
{
	fast;
	int nr, nc, res_sum=0, res_r, res_c, sum;

	cin >> nr >> nc;
	for (int i=1; i<=nr; i++) {
		for (int j=1; j<=nc; j++) cin >> arr[i][j];
	}
	for (int i=1; i<=nr-2; i++) {
		for (int j=1; j<=nc-2; j++) {
			sum = 0;
			for (int k=i; k<=i+2; k++) {
				for (int h=j; h<=j+2; h++)
					sum += arr[k][h];
			}
			if (res_sum < sum) {
				res_sum = sum;
				res_r = i;
				res_c = j;
			}
		}
	}
	cout << res_sum << '\n' << res_r << ' ' << res_c;
	return 0;
}
