// 부호
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;

	for (int i=0; i<3; i++) {
		cin >> n;

		vector<long long> negative;
		vector<long long> positive;
		long long number;
		for (int j=0; j<n; j++) {
			cin >> number;
			if (number < 0)
				negative.push_back(number);
			else if (number > 0)
				positive.push_back(number);
		}
		while (!negative.empty() && !positive.empty()) {
			if (negative.back() + positive.back() < 0) {
				negative.back() += positive.back();
				positive.pop_back();
			}
			else if (negative.back() + positive.back() > 0) {
				positive.back() += negative.back();
				negative.pop_back();
			}
			else {
				negative.pop_back();
				positive.pop_back();
			}
		}
		if (negative.empty() && positive.empty()) cout << "0\n";
		else if (negative.empty()) cout << "+\n";
		else cout << "-\n";
	}
	return (0);
}