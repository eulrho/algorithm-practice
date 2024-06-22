// 좋은 단어
#include <iostream>
#include <string>
#include <stack>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, cnt=0;
	string word;

	cin >> n;
	for (int i=0; i<n; i++) {
		stack<char> s;

		cin >> word;
		s.push(word[0]);
		for (int j=1; j<(int)word.size(); j++) {
			if (s.empty() || s.top() != word[j]) s.push(word[j]);
			else s.pop();
		}
		if (s.empty()) cnt++;
	}
	cout << cnt;
	return (0);
}