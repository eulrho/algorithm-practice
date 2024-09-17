// ZOAC 3
#include <iostream>
#include <map>
#include <cmath>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string arr[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
string vowels = "yuiohpjklbnm";

int find_time(pair<int, int>&a, pair<int, int>&b)
{
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
	fast;
	map<char, pair<int, int>> qwerty;
	for (int i=0; i<3; i++) {
		for (int j=0; j<(int)arr[i].length(); j++) {
			qwerty[arr[i][j]] = make_pair(i+1, j+1);
		}
	}

	char start_left, start_right;
	string str;
	cin >> start_left >> start_right >> str;

	int idx = 0, size = (int)str.length(), time=0;
	while (idx < size) {
		if (vowels.find(str[idx]) == string::npos) {
			time += find_time(qwerty[start_left], qwerty[str[idx]]) + 1;
			start_left = str[idx];
		}
		else {
			time += find_time(qwerty[start_right], qwerty[str[idx]]) + 1;
			start_right = str[idx];
		}
		idx++;
	}
	cout << time;
	return (0);
}