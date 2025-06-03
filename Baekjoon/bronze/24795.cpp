// Saving Princess Peach
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, y; cin >> n >> y;

	int k;
	bool obstacle[101] = {false,};
	for (int i=0; i<y; i++) {
		cin >> k;
		obstacle[k] = true;
	}
	int x = 0;
	for (int i=0; i<n; i++) {
		if (!obstacle[i]) cout << i << '\n';
		else x++;
	}
	cout << "Mario got "<< x <<" of the dangerous obstacles.";
	return (0);
}