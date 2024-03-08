// 수들의 합 5
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int check_sum(int a, int b, int n)
{
	int sum=0;

	for (int i=a; i<=b; i++)
		sum += i;
	if (sum == n) return (0);
	else if (sum > n) return (1);
	else return (2);
}

int count_case(int n)
{
	int left=1, right=1, temp, count=0;

	while (left <= n && right <= n) {
		temp = check_sum(left, right, n);
		if (temp == 0) count++;
		if (temp <= 1) left++;
		else right++;
	}
	return (count);
}

int main()
{
	fast;
	int n;

	cin >> n;
	cout << count_case(n);
	return (0);
}
