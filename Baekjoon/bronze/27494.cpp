// 2023년은 검은 토끼의 해
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	string sample="2023";
	cin >> n;
	if (n < 2023) {
		cout << 0;
		return 0;
	}

	int cnt=0;
	for (int i=2023; i<=n; i++) {
		string number = to_string(i);
		int idx=0;
		for (int j=0; j<(int)number.size(); j++) {
			if (idx < 4 && sample[idx] == number[j]) idx++;
		}
		if (idx == 4) cnt++;
	}
	cout << cnt;
	return (0);
}