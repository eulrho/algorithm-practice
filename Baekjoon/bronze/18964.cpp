// Questionnaire
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, number, odd=0, even=0;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> number;
		if (number % 2 == 0) even++;
		else odd++;
	}
	if (odd > even) cout << "2 1";
	else cout << "2 0";
	return (0);
}
