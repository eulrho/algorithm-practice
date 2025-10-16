// 회문
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string sample = "ABCDEF";

bool check(long long a, int base) {
	string base_number;
	while (a) {
		int tmp = a % base;
		if (tmp >= 10) base_number = sample[tmp - 10] + base_number;
		else base_number = to_string(a % base) + base_number;
		a /= base;
	}
	int size = (int)base_number.size();
	for (int i=0; i<=size/2; i++) {
		if (base_number[i] != base_number[size - i - 1]) return false;
	}
	return true;
}

int main()
{
	fast;
	int t; cin >> t;
	long long a, n;
	for (int i=0; i<t; i++) {
		cin >> a >> n;
		cout << check(a, n) << '\n';
	}
	return (0);
}