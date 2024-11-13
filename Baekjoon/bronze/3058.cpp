// 짝수를 찾아라
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, min_num=-1, sum_num=0, num;

	cin >> t;
	for (int i=0; i<t; i++) {
		min_num = -1;
		sum_num = 0;
		for (int j=0; j<7; j++) {
			cin >> num;
			if (num % 2 != 0) continue ;
			if (min_num == -1 || min_num > num) min_num = num;
			sum_num += num;
		}
		cout << sum_num << ' ' << min_num << '\n';
	}
	return (0);
}