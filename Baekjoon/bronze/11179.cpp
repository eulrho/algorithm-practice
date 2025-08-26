// 2진수 뒤집기
#include <iostream>
#include <cmath>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	vector<int> exponent;
	for (int i=30; i>=0; i--) {
		int tmp = (int)pow(2, i);
		if (tmp <= n) {
			exponent.push_back(i);
			n -= tmp;
		}
	}
	int result = 0;
	for (auto e : exponent)
		result += (int)pow(2, exponent[0] - e);
	cout << result;
	return (0);
}