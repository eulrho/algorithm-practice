// 숫자출력
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	string str; cin >> str;
	int cnt = 0;
	for (auto& c : str) cnt += arr[c - '0'];
	cout << cnt;
	return (0);
}