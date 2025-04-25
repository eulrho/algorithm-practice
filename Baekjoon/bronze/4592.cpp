// 중복을 없애자
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	while (true) {
		cin >> n;
		if (n == 0) break ;

		vector<int> data;
		int number;
		for (int i=0; i<n; i++) {
			cin >> number;
			if (i == 0 || data.back() != number) data.push_back(number);
		}
		for (auto iter= data.begin();iter != data.end();iter++)
			cout << *iter << " ";
		cout << "$\n";
	}
	return (0);
}