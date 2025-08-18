// 어게인 포닉스
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	string str, sample = "PO", pho = "PHO";
	size_t sample_len = sample.length();
	for (int i=0; i<t; i++) {
		cin >> str;
		size_t index=0;
		while (index < str.length()) {
			size_t tmp = str.find(sample, index);
			if (tmp == string::npos) break ;
			str.replace(tmp, sample_len, pho);
			index = tmp + sample_len;
		}
		cout << str << '\n';
	}
	return (0);
}