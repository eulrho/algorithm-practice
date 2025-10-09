// Counting Antibodies
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long k[2], lamda[2], h[3];
	cin >> k[0] >> k[1];
	cin >> lamda[0] >> lamda[1];
	cin >> h[0] >> h[1] >> h[2];
	cout << (k[0] * k[1] + lamda[0] * lamda[1]) * h[0] * h[1] * h[2];
	return (0);
}