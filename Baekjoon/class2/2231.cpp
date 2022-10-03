// 분해합
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum, tmp, num, res=1000000;
	cin >> n;

	tmp = n;
	while (tmp!=0) {
		num = tmp; sum = tmp;
		while (num !=0) {
			sum += num % 10;
			num /= 10;
		}
		if (sum == n)
			if (res > tmp) res = tmp;
		tmp--;
	}
	if (res != 1000000) cout << res;
	else cout << 0;


	return 0;
}