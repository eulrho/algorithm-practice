// 균형잡힌 세상
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string str; stack<char>s; int len;
	bool exit=false, success=true;
	while (1) {
		getline(cin, str);
		len = str.length();

		for (int i = 0; i < len; i++) {
			if (str[0] == '.'&&len==1) {
				exit = true;
				break;
			}

			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);

			if (str[i] == ')') {
				if (s.empty()==0&&s.top() == '(') s.pop();
				else success = false;
			}
			else if (str[i] == ']') {
				if (s.empty() == 0 && s.top() == '[') s.pop();
				else success = false;
			}
			
			if (i==len-1&&str[i] == '.') {
				if (success==true&&s.empty()==1) {
					cout << "yes\n";
				}
				else {
					cout << "no\n";
					while (!s.empty()) s.pop();
					success = true;
				}
			}
		}

		if (exit) break;
	}

	return 0;
}