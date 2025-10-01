// SPC에 가는 길
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int s[2], e[2], p[2];
	cin >> s[0] >> s[1] >> e[0] >> e[1] >> p[0] >> p[1];

	if (s[1] != e[1] && s[0] != e[0]) cout << 1;
	else if (s[0] == e[0]) {
		if (s[0] == p[0] && ((s[1] < p[1] && p[1] < e[1]) || (e[1] < p[1] && p[1] < s[1])))
			cout << 2;
		else cout << 0;
	}
	else {
		if (s[1] == p[1] && ((s[0] < p[0] && p[0] < e[0]) || (e[0] < p[0] && p[0] < s[0])))
			cout << 2;
		else cout << 0;
	}
	return (0);
}

/* [s, e]
 * 1. x, y 다른 경우
 * 	-> p와 상관없이 1
 * 2. x 같은 경우
 * 	2-1. s, e 사이에 p 존재할 경우 -> 2
 * 	2-2. 그 외의 경우 -> 0
 * 3. y 같은 경우
 * 	3-1. s, e 사이에 p 존재할 경우 -> 2
 * 	3-2. 그 외의 경우 -> 0
 */