// 알고리즘 수업 - 피보나치 수 1
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int recursive_cnt = 0;
int dynamic_cnt = 0;

void recursive_fib(int n) {
	if (n == 1 || n == 2) recursive_cnt++;
	else {
		recursive_fib(n - 1);
		recursive_fib(n - 2);
	}
}

void dynamic_fib(int n) {
	for (int i = 3; i <= n; i++) dynamic_cnt++;
}

int main()
{
	fast;
	int n; cin >> n;
	recursive_fib(n);
	dynamic_fib(n);
	cout << recursive_cnt << " " << dynamic_cnt;
	return (0);
}