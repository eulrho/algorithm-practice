// Odd Gnome
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, g; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> g;
		int gnome, front = -1, king = -1;
		for (int j=1; j<=g; j++) {
			cin >> gnome;
			if (front == -1 || king != -1) front = gnome;
			else {
				if (front + 1 == gnome) front = gnome;
				else king = j;
			}
		}
		cout << king << '\n';
	}
	return (0);
}