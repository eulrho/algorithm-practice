// Simple Arithmetic
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long a, b, c;
	cin >> a >> b >> c;
	long long tmp = a * b / c;

	string result = to_string(tmp);
	string decimal = to_string((double)((a * b) % c) / c);
	cout << result + decimal.substr(1);
	return (0);
}