// Awkward Digits
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int conv_base(string number, int base) {
	int res = 0, size = (int)number.size();
	for (int i=0; i<size; i++) {
		res += (number[i] - '0') * (int)pow(base, size - 1 - i);
	}
	return res;
}

int solution(vector<int> &numbers, string &base3) {
	string sample = "012";
	for (int i=0; i<(int)base3.size(); i++) {
		char origin = base3[i];
		for (int j=0; j<3; j++) {
			if (origin == sample[j]) continue ;
			base3[i] = sample[j];
			int tmp = conv_base(base3, 3);
			if (find(numbers.begin(), numbers.end(), tmp) != numbers.end())
				return tmp;
		}
		base3[i] = origin;
	}
	return -1;
}

int main()
{
	fast;
	string base2, base3;
	cin >> base2 >> base3;

	vector<int> numbers;
	for (int i=0; i<(int)base2.size(); i++) {
		char origin = base2[i];
		base2[i] = base2[i] == '0' ? '1' : '0';
		numbers.push_back(conv_base(base2, 2));
		base2[i] = origin;
	}
	cout << solution(numbers, base3);
	return (0);
}