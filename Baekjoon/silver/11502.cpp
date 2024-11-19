// 세 개의 소수 문제
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_prime(int n)
{
	if (n == 1) return false;
	for (int i = 2; i <= n / i; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void set_prime(vector<int> &prime)
{
	for (int i=2; i<1000; i++) {
		if (is_prime(i)) prime.push_back(i);
	}
}

void check_number(int k, int size, vector<int> &prime)
{
	for (int j=0; j<size; j++) {
		if (prime[j] >= k) break ;
		for (int l=j; l<size; l++) {
			if (prime[j] + prime[l] >= k) break ;
			if (find(prime.begin() + l, prime.end(), k - prime[j] - prime[l]) != prime.end()) {
				cout << prime[j] << ' ' << prime[l] << ' ' << k - prime[j] - prime[l] << '\n';
				return ;
			}
		}
	}
	cout << 0 << '\n';
	return ;
}

int main()
{
	fast;
	vector<int>prime;
	set_prime(prime);

	int t, k, size=(int)prime.size();
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> k;
		check_number(k, size, prime);
	}
	return (0);
}