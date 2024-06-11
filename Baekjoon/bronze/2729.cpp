// 이진수 덧셈
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t;
	string str1, str2;

	cin >> t;
	for (int i=0; i<t; i++) {
		int res[81];
		int tmp=0, res_idx = 0;

		cin >> str1 >> str2;
		int j = (int)str1.size() - 1, k = (int)str2.size() - 1;

		while (j >= 0 && k >= 0) {
			res[res_idx] = tmp + str1[j] - '0' + str2[k] - '0';
			if (res[res_idx] > 1) {
				tmp = 1;
				res[res_idx] -= 2;
			}
			else tmp = 0;
			res_idx++;
			j--;
			k--;
		}
		while (j >= 0) {
			res[res_idx] = tmp + str1[j] - '0';
			if (res[res_idx] > 1) {
				tmp = 1;
				res[res_idx] = 0;
			}
			else tmp = 0;
			res_idx++;
			j--;
		}
		while (k >= 0) {
			res[res_idx] = tmp + str2[k] - '0';
			if (res[res_idx] > 1) {
				tmp = 1;
				res[res_idx] = 0;
			}
			else tmp = 0;
			res_idx++;
			k--;
		}
		if (tmp == 1) {
			res[res_idx] = 1;
			res_idx++;
		}
		int h = res_idx - 1;
		while (h >= 0 && res[h] == 0) h--;
		if (h < 0) cout << 0;
		while (h >= 0) {
			cout << res[h];
			h--;
		}
		cout << '\n';
	}
	return (0);
}
