// 수 찾기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, mid, high, low;
	long long x;

	cin >> n;
	vector<long long> A(n);
	for (long long &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;

		low = 0; high = n-1;
		while (high - low >= 0) {
			mid = (high + low) / 2;
			if (A[mid] == x) {
				cout << 1 << "\n";
				break;
			}
			else if (A[mid] > x) high = mid - 1;
			else low = mid + 1;		
		}
		if (high - low < 0) cout << 0 << "\n";
	}

	return 0;
}