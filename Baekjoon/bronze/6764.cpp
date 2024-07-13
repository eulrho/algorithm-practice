// Sounds fishy!
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a[4];
	bool flag[4] = {false,};

	for (int i=0; i<4; i++) cin >> a[i];
	for (int i=0; i<3; i++) {
		if (a[i] - a[i+1] > 0) {
			if (flag[1] == false && flag[2] == false)
				flag[0] = true;
			else {
				flag[3] = true;
				break ;
			}
		}
		else if (a[i] - a[i+1] == 0) {
			if (flag[0] == false && flag[1] == false)
				flag[2] = true;
			else {
				flag[3] = true;
				break ;
			}
		}
		else {
			if (flag[0] == false && flag[2] == false)
				flag[1] = true;
			else {
				flag[3] = true;
				break ;
			}
		}
	}
	if (flag[3] == true) cout << "No Fish";
	else if (flag[0] == true) cout << "Fish Diving";
	else if (flag[2] == true) cout << "Fish At Constant Depth";
	else cout << "Fish Rising";
	return (0);
}