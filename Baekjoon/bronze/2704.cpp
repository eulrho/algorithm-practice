// 이진법 시계
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string binary_conv(string str) {
	int tmp = stoi(str);
	string res;

	while (tmp) {
		res = to_string(tmp % 2) + res;
		tmp /= 2;
	}

	int size = (int)res.size();
	string zero = "000000";
	if (size < 6) res = zero.substr(0, 6 - size) + res;
	return res;
}

void print_vertical(string hour, string minute, string second) {
	for (int i=0; i<6; i++) {
		cout << hour[i] << minute[i] << second[i];
	}
}

void print_horizontal(string hour, string minute, string second) {
	for (int i=0; i<6; i++) cout << hour[i];
	for (int i=0; i<6; i++) cout << minute[i];
	for (int i=0; i<6; i++) cout << second[i];
}

int main()
{
	fast;
	int n; cin >> n;
	string time, hour, minute, second;

	for (int i=0; i<n; i++) {
		cin >> time;

		hour = binary_conv(time.substr(0, 2));
		minute = binary_conv(time.substr(3, 2));
		second = binary_conv(time.substr(6, 2));

		print_vertical(hour, minute, second);
		cout << " ";
		print_horizontal(hour, minute, second);
		cout << '\n';
	}
	return (0);
}