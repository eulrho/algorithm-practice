// 팩토리얼 0의 개수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main() {
	fast;
	int n, count_five=0;

	cin >> n;
	for (int i=1; i<=n; i++) {
		if (i % 5 == 0) {
			count_five++;
			if (i % 25 == 0)
				count_five++;
			if (i % 125 == 0)
				count_five++;
		}
	}

	cout << count_five;
	return (0);
}