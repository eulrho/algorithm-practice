// 수학은 체육과목 입니다 2
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int tmp = n % 8;
	if (tmp == 0) tmp = 2;
	else if (tmp == 7) tmp = 3;
	else if (tmp == 6) tmp = 4;
	cout << tmp;
	return (0);
}