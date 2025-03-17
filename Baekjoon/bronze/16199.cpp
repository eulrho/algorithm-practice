// 나이 계산하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int birthday[3], current[3];
	for (int i=0; i<3; i++) cin >> birthday[i];
	for (int i=0; i<3; i++) cin >> current[i];

	int diff = current[0] - birthday[0];
	if (current[1] > birthday[1] || (current[1] == birthday[1]) && current[2] >= birthday[2])
		cout << diff << '\n';
	else cout << diff - 1 << '\n';

	cout << diff + 1 << '\n';
	cout << diff << '\n';
	return (0);
}