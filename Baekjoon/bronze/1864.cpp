// 문어 숫자
#include <iostream>
#include <string>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_number(char c)
{
	switch (c) {
		case '-':
			return (0);
		case '\\':
			return (1);
		case '(':
			return (2);
		case '@':
			return (3);
		case '?':
			return (4);
		case '>':
			return (5);
		case '&':
			return (6);
		case '%':
			return (7);
		default :
			return (-1);
	}
}

void print_base_10(string str)
{
	int size = (int)str.size(), res=0;

	for (int i=0; i<size; i++)
		res += find_number(str[i]) * (int)pow(8, size - 1 - i);
	cout << res << '\n';
}

int main()
{
	fast;
	string str;

	while (true) {
		cin >> str;
		if (str == "#") break ;
		print_base_10(str);
	}
	return (0);
}