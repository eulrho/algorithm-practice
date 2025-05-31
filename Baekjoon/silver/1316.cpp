// 그룹 단어 체커
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isGroup(string word) {
	bool check[26] = {false,};
	int idx = 0, size = (int)word.size();
	while (idx < size) {
		if (check[word[idx] - 'a']) return false;
		int start = idx;
		check[word[idx] - 'a'] = true;
		while (idx < size && word[idx] == word[start]) idx++;
	}
	return true;
}

int main()
{
	fast;
	int n, cnt = 0; cin >> n;
	string word;

	for (int i=0; i<n; i++) {
		cin >> word;
		if (isGroup(word)) cnt++;
	}
	cout << cnt;
	return (0);
}