// Speed fines are not fine!
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b;

	cin >> a >> b;
	if (a >= b) cout << "Congratulations, you are within the speed limit!";
	else {
		cout << "You are speeding and your fine is $";
		if (b - a <= 20) cout << "100.";
		else if (b - a <= 30) cout << "270.";
		else cout << "500.";
	}
	return (0);
}