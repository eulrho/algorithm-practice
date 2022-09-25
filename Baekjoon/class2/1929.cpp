// 소수 구하기
// 에라토스테네스의 체
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	vector<int> arr(n+1, 0);

	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 2; i * i <= n; i++) {
		if (arr[i] == 0) continue;
		for (int j = i * i; j <= n; j += i) {
			if(arr[i] == 0) continue;
			else arr[j] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] != 0) cout << arr[i] << "\n";
	}

	return 0;
}