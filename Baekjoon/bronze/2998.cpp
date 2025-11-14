// 8진수
#include <iostream>
#include <string>
#include <map>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_zero_cnt(string num) {
	int size = (int)num.size();
	return size % 3 == 0 ? 0 : 3 - size % 3;
}

void fill_octal_map(map<string, string> &octal) {
	octal["000"] = "0";
	octal["001"] = "1";
	octal["010"] = "2";
	octal["011"] = "3";
	octal["100"] = "4";
	octal["101"] = "5";
	octal["110"] = "6";
	octal["111"] = "7";
}

int main()
{
	fast;
	string num; cin >> num;
	string zero = "000";
	num = zero.substr(0, find_zero_cnt(num)) + num;
	string result;
	map<string, string> octal;
	fill_octal_map(octal);
	for (int i=0; i<(int)num.size(); i+=3) {
		result += octal[num.substr(i, 3)];
	}
	cout << result;
	return (0);
}