// Imena
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isEnd(char c)
{
	return (c == '.' || c == '?' || c == '!');
}

int main()
{
	fast;
	int n; cin >> n;
	cin.ignore();

	string titles;
	getline(cin, titles);

	int cnt = 0, size = (int)titles.size(), idx = 0;
	while (idx < size) {
		while (idx < size && titles[idx] == ' ') idx++;
		bool flag = titles[idx] >= 'A' && titles[idx] <= 'Z';
		if (flag) idx++;
		while (idx < size && titles[idx] != ' ') {
			if (!(titles[idx] >= 'a' && titles[idx] <= 'z') && !isEnd(titles[idx]))
				flag = false;
			idx++;
		}
		if (flag) cnt++;
		if (idx > 0 && isEnd(titles[idx - 1])) {
			cout << cnt << '\n';
			cnt = 0;
		}
	}

	return (0);
}