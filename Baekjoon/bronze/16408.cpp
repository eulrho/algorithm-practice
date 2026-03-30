// Poker Hand
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str[5];
	for (int i=0; i<5; i++) cin >> str[i];
	string rank = "A23456789TJQK";
	int arr[13] = {0};
	for (int i=0; i<5; i++) {
		for (int j=0; j<13; j++) {
			if (rank[j] == str[i][0]) arr[j]++;
		}
	}
	int max_cnt = 0;
	for (int i=0; i<13; i++) max_cnt = max(arr[i], max_cnt);
	cout << max_cnt;
	return (0);
}