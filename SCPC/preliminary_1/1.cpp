// A보다 B가 좋아 100.0
#include <iostream>
#include <string>
using namespace std;
#define fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int Answer;

int main(int argc, char** argv)
{
	fast;
	int T, test_case, n;
	string str;
	//freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		cin >> n >> str;
		bool flag = false;
		int len=0;

		for (int i=0; i<n; i++) {
			if (str[i] == 'A') {
				if (!flag)
					flag = true;
				else {
					if (len < 2) Answer += 2 - len;
					len = 0;
				}
			}
			else if (flag && str[i] == 'B')
				len++;
		}
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}