// Donut Shop
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int d; cin >> d;
	int e; cin >> e;
	char sign;
	int num;
	for (int i=0; i<e; i++) {
		cin >> sign >> num;
		if (sign == '+') d += num;
		else d -= num;
	}
	cout << d;
	return (0);
}