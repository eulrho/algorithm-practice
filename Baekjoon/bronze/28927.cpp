// Киноманы
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int tmp, sum_max=0, sum_mel=0, time[3]={3, 20, 120};

	for (int i=0; i<3; i++) {
		cin >> tmp;
		sum_max += tmp * time[i];
	}
	for (int i=0; i<3; i++) {
		cin >> tmp;
		sum_mel += tmp * time[i];
	}
	if (sum_max > sum_mel) cout << "Max";
	else if (sum_max < sum_mel) cout << "Mel";
	else cout << "Draw";
	return (0);
}