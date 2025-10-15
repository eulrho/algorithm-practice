// 가지 한 두름 주세요
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string arr[10][10];
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) cin >> arr[i][j];
	}
	bool flag = false;
	for (int i=0; i<10; i++) {
		bool check = true;
		for (int j=1; j<10; j++) {
			if (arr[i][0] != arr[i][j]) check = false;
		}
		if (check) flag = true;
	}
	for (int j=0; j<10; j++) {
		bool check = true;
		for (int i=1; i<10; i++) {
			if (arr[0][j] != arr[i][j]) check = false;
		}
		if (check) flag = true;
	}
	cout << flag;
	return (0);
}