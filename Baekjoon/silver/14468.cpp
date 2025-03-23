// 소가 길을 건너간 이유 2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	vector<char> check_list;

	int idx = 0, cnt = 0;
	for (; idx + 1 < 52; idx += 2) {
		if (str[idx] == str[idx + 1]) continue ;
		vector<char>::iterator tmp = find(check_list.begin(), check_list.end(), str[idx]);
		if (tmp != check_list.end()) {
			cnt += (int)check_list.size() - (tmp - check_list.begin()) - 1;
			check_list.erase(tmp);
			idx--;
		}
		else {
			check_list.push_back(str[idx]);
			idx--;
		}
	}
	cout << cnt;
	return (0);
}