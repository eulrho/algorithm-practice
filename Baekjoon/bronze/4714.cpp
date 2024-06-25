// Lunacy
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double num;

	cout << fixed;
	cout.precision(2);
	while (true) {
		cin >> num;
		if (num < 0) break ;
		cout << "Objects weighing " << num << " on Earth will weigh " << num * 0.167 << " on the moon.\n";
	}
	return (0);
}