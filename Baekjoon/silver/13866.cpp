// 팀 나누기
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int level[4];
	for (int i=0; i<4; i++) cin >> level[i];
	cout << abs(level[3] + level[0] - level[1] - level[2]);
	return (0);
}