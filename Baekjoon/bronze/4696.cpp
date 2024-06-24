// St. Ives
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double num, res;

	cout << fixed;
	cout.precision(2);
	while (true) {
		cin >> num;
		if (num == 0) break ;
		else {
			res = 0;
			for (int i=0; i<5; i++)
				res += pow(num, i);
			cout << res << '\n';
		}
	}
	return (0);
}