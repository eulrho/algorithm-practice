// ICPC
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int p1, s1, s2, p2;

	cin >> p1 >> s1 >> s2 >> p2;
	if (p1 + p2 > s1 + s2) cout << "Persepolis";
	else if (p1 + p2 < s1 + s2) cout << "Esteghlal";
	else if (s1 > p2) cout << "Esteghlal";
	else if (s1 < p2) cout << "Persepolis";
	else cout << "Penalty";
	return (0);
}