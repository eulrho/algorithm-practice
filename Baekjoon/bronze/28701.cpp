// 세제곱의 합
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int sum_1_to_n(int n)
{
	int sum = 0;

	for (int i=1; i<=n; i++) sum += i;
	return (sum);
}

int sum_1_to_n3(int n)
{
	int sum = 0;

	for (int i=1; i<=n; i++) sum += (i * i * i);
	return (sum);
}

int main()
{
	fast;
	int n, tmp;

	cin >> n;
	tmp = sum_1_to_n(n);
	cout << tmp << '\n' << tmp * tmp << '\n' << sum_1_to_n3(n);
	return (0);
}