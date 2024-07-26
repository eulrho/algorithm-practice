// Fridge of Your Dreams
#include <iostream>
#include <string>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, num_digit;
	string num;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> num;
		num_digit = 0;
		for (int j=0; j<24; j++) {
			num_digit += (num[j] - '0') * (int)pow(2, 24 - j - 1);
		}
		cout << num_digit << '\n';
	}
	return (0);
}