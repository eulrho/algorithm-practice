// King Arthur's Round Table
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define PI 3.14159

int main()
{
	fast;
	double d, w, n; cin >> d >> w >> n;
	if (d * PI >= w * n) cout << "YES";
	else cout << "NO";
	return (0);
}