// Isn’t It Funny How a Bear Likes Honey?
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define PI 3.14159265359

int main()
{
	fast;
	int k, b;
	double w, ri;

	cin >> k;
	for (int i=1; i<=k; i++) {
		cin >> b >> w;
		for (int j=0; j<b; j++) {
			cin >> ri;
			w -= 4.0 / 3.0 * PI * pow(ri, 3) / 1000.0;
		}
		cout << "Data Set " << i << ":\n";
		if (w <= 0.0) cout << "Yes\n";
		else cout << "No\n";
		cout << '\n';
	}
	return (0);
}