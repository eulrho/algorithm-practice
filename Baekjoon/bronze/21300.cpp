// 병 수거
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, sum=0;

	for (int i=0; i<6; i++) {
		cin >> n;
		sum += n*5;
	}
	cout << sum;
	return (0);
}