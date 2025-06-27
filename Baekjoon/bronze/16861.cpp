// Harshad Numbers
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isHarshad(long long num) {
	long long sum=0, tmp = num;
	while (tmp) {
		sum += tmp % 10;
		tmp /= 10;
	}
	return (num % sum == 0);
}

int main()
{
	fast;
	long long n; cin >> n;
	for (long long i=n;;i++) {
		if (isHarshad(i)) {
			cout << i;
			break ;
		}
	}
	return (0);
}