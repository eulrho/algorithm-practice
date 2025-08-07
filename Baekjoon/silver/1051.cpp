// 숫자 정사각형
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	string square[n];
	for (int i=0; i<n; i++) cin >> square[i];
	int i = 0, result = 1;
	while (i < n - 1) {
		int left = 0, right = 1;
		while (left < m - 1) {
			while ((right < m) && (square[i][left] != square[i][right])) right++;
			if (right == m) {
				left++;
				right = left + 1;
				continue ;
			}
			int downY = i + (right - left);
			if (downY < n
				&& square[downY][left] == square[i][left]
				&& square[downY][right] == square[i][left])
				result = max(result, (right - left + 1) * (right - left + 1));
			right++;
		}
		i++;
	}
	cout << result;
	return (0);
}