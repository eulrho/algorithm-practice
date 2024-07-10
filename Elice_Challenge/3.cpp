// 문자열 압축 해제
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_string_len(string &str, int *idx, int len, int depth)
{
	int res = 0, tmp;

	while (*idx < len) {
		if (str[*idx] == '(') {
			res--;
			tmp = str[*idx - 1] - '0';
			(*idx)++;
			res += tmp * find_string_len(str, idx, len, depth+1);
		}
		else if (str[*idx] == ')')
		{
			(*idx)++;
			if (depth != 0)
				break ;
		}
		else {
			res++;
			(*idx)++;
		}
	}
	return res;
}

int main()
{
	fast;
	string str;
	int idx = 0;

	cin >> str;
	cout << find_string_len(str, &idx, (int)str.size(), 0);
	return (0);
}