// 강당 대관
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string seminar, result;
	int cnt, max_cnt = 0;
	for (int i=0; i<7; i++) {
		cin >> seminar >> cnt;
		if (max_cnt < cnt) {
			result = seminar;
			max_cnt = cnt;
		}
	}
	cout << result;
	return (0);
}