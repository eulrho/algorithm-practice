// Champernowne Verification
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string num; cin >> num;

	int start = 0, num_size = (int)num.size(), k=0;
	for (int i=1; i<=num_size; i++) {
		string tmp = to_string(i);
		int size = tmp.size();

		if (start + size > num_size || num.substr(start, tmp.size()) != tmp) {
			cout << -1;
			return 0;
		}
		start += size;
		k++;
	}
	cout << k;
	return (0);
}