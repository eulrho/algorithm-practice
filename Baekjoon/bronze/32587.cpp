// Dragged-out Duel
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int game(char a, char b)
{
	if (a == 'R' && b == 'S' || a == 'S' && b == 'P' || a == 'P' && b == 'R') return 1;
	else if (a == b) return 2;
	else return 0;
}

int main()
{
	fast;
	int n; cin >> n;

	string a, b; cin >> a >> b;
	int a_w=0, b_w=0;
	for (int i=0; i<n; i++) {
		int tmp = game(a[i], b[i]);
		if (tmp == 1) a_w++;
		else if (tmp == 0) b_w++;
	}
	if (a_w > b_w) cout << "victory";
	else cout << "defeat";
	return (0);
}