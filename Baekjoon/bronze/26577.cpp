// Math
#include <iostream>
#include <string>
#include <deque>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isSign(string s)
{
	return (s == "+" || s == "-" || s == "/" || s == "*" || s == "%");
}

void insertNumber(int num, deque<int> &number, deque<string> &sign)
{
	int tmp = num;
	if (!sign.empty() && (sign.back() == "*" || sign.back() == "/" || sign.back() == "%")) {
		if (sign.back() == "*")
			tmp = number.back() * tmp;
		else if (sign.back() == "/")
			tmp = number.back() / tmp;
		else tmp = number.back() % tmp;
		number.pop_back();
		sign.pop_back();
	}
	number.push_back(tmp);
}

int main()
{
	fast;
	int n; cin >> n;
	cin.ignore();

	for (int i=0; i<n; i++) {
		deque<int> number;
		deque<string> sign;

		string str;
		getline(cin, str);
		int idx=0, size=(int)str.size();
		while (idx < size) {
			int start = idx;
			while (idx < size && str[idx] != ' ') idx++;

			string tmp = str.substr(start, idx - start);
			if (!isSign(tmp))
				insertNumber(stoi(tmp), number, sign);
			else sign.push_back(tmp);
			if (idx < size) idx++;
		}
		while (!sign.empty()) {
			int tmp = number.front();
			number.pop_front();
			if (sign.front() == "+")
				tmp += number.front();
			else
				tmp -= number.front();
			number.pop_front();
			number.push_front(tmp);
			sign.pop_front();
		}
		cout << number.front() << '\n';
	}
	return (0);
}