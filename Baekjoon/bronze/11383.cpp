// 뚊
#include <iostream>
#include <string>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m;
	bool flag = true;
	cin >> n >> m;

	string tmp, target;
	vector<string> words;
	for (int i=0; i<n; i++) {
		cin >> tmp;
		words.push_back(tmp);
	}

	for (int i=0; i<n; i++) {
		cin >> target;
		tmp = "";
		for (int j=0; j<m; j++) {
			tmp += words[i][j];
			tmp +=  words[i][j];
		}
		if (tmp != target) flag = false;
	}

	if (flag) cout << "Eyfa";
	else cout << "Not Eyfa";
	return (0);
}
