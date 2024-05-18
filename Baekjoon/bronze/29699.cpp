// Welcome to SMUPC!
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	string str = "WelcomeToSMUPC";

	cin >> n;
	cout << str[(n - 1) % 14];
	return (0);
}