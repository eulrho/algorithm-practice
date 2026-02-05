// 특정 조건에 맞게 k개 중에 1개를 n번 뽑기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_valid(int n, int *arr) {
	if (n < 3) return true;
	int sample = arr[0], cnt = 1, max_cnt = 0;
	for (int i=1; i<n; i++) {
		if (arr[i] == sample) cnt++;
		else {
			sample = arr[i];
			max_cnt = max(max_cnt, cnt);
			cnt = 1;
		}
	}
	max_cnt = max(max_cnt, cnt);
	return max_cnt < 3;
}

void choice(int k, int n, int seq, int *arr) {
	if (seq == n) {
		if (is_valid(n, arr)) {
			for (int i=0; i<n; i++) cout << arr[i] << " ";
			cout << '\n';
		}
		return ;
	}
	for (int i=1; i<=k; i++) {
		arr[seq] = i;
		choice(k, n, seq + 1, arr);
	}
}

int main()
{
	fast;
	int k, n; cin >> k >> n;

	int arr[10] = {0};
	choice(k, n, 0, arr);
	return (0);
}