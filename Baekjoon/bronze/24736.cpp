// Football Scoring
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_total_score()
{
	int num, res=0;

	cin >> num;
	res += num * 6;
	cin >> num;
	res += num * 3;
	cin >> num;
	res += num * 2;
	cin >> num;
	res += num * 1;
	cin >> num;
	res += num * 2;
	return (res);
}

int main()
{
	fast;
	int a, b;

	a = find_total_score();
	b = find_total_score();
	cout << a << ' ' << b;
	return (0);
}