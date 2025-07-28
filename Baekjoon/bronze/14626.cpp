// ISBN
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string num; cin >> num;
	int sum = 0, target_idx, size = (int)num.size(), target=0, result;
	for (int i=0; i<size-1; i++) {
		if (num[i] == '*') target_idx = i;
		else if (i % 2 == 0) sum += num[i] - '0';
		else sum += (num[i] - '0') * 3;
	}

	result = num[size - 1] == '0' ? 0 : 10 - (num[size - 1] - '0');
	for (int i=0; i<10; i++) {
		int tmp = target_idx % 2 == 1 ? i*3 : i;
		if ((sum + tmp) % 10 == result) {
			target = i;
			break ;
		}
	}
	cout << target;
	return (0);
}