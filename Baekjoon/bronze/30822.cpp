// UOSPC 세기
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	string s; cin >> s;
	int arr[5] = {0,};
	string sample = "uospc";
	for (int i=0; i<n; i++) {
		for (int j=0; j<5; j++) {
			if (s[i] == sample[j]) {
				arr[j]++;
				break ;
			}
		}
	}
	int min_cnt = n;
	for (int i=0; i<5; i++)
		min_cnt = min(min_cnt, arr[i]);
	cout << min_cnt;
	return (0);
}