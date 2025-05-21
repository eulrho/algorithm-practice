// 연산자 끼워넣기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

long long min_value=1000000000, max_value=-1000000000;
int n;
string signs = "+-*/";

int calculate(long long *a, char *seq) {
	long long res = a[0];

	for (int i=0; i<n-1; i++) {
		if (seq[i] == '/') res /= a[i + 1];
		else if (seq[i] == '*') res *= a[i + 1];
		else if (seq[i] == '+') res += a[i + 1];
		else res -= a[i + 1];
	}

	return res;
}

void find_value(long long *a, int *sign, char *seq, int seq_size) {
	if (seq_size == n - 1) {
		long long tmp = calculate(a, seq);
		if (min_value > tmp) min_value = tmp;
		if (max_value < tmp) max_value = tmp;
		return ;
	}
	for (int i=0; i<4; i++) {
		if (sign[i] == 0) continue ;
		seq[seq_size] = signs[i];
		--sign[i];
		find_value(a, sign, seq, seq_size + 1);
		++sign[i];
	}
}

int main()
{
	fast;
	cin >> n;

	long long a[n];
	for (int i=0; i<n; i++) cin >> a[i];

	int sign[4];
	for (int i=0; i<4; i++) cin >> sign[i];

	char seq[n-1];
	find_value(a, sign, seq, 0);
	cout << max_value << '\n' << min_value;
	return (0);
}