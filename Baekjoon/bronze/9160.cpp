// The Brave Sir Robin’s cAsE cOrReCtOr
#include <iostream>
#include <string>
#include <cctype>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isEndChar(char c) {
	return (c == '.' || c == '?' || c == '!');
}

bool isSpaceOrParentheses(char c) {
	return (isspace(c) || c == '(' || c == ')');
}

int main()
{
	fast;
	string str, result;
	while (getline(cin, str)) {
		if (!result.empty()) result += '\n';
		result += str;
	}

	int i = -1, size = (int)result.size();
	while (++i < size) {
		int tmp = i;
		while (i < size && isEndChar(result[i])) i++;
		if (tmp == i) {
			if (isupper(result[i])) result[i] = (char)tolower(result[i]);
			continue;
		}

		while (i < size && isSpaceOrParentheses(result[i])) i++;
		if (islower(result[i])) result[i] = (char)toupper(result[i]);
	}

	cout << result;
	return (0);
}