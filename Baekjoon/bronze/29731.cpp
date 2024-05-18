// 2033년 밈 투표
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_promised(string str)
{
	if (str == "Never gonna give you up"
		|| str == "Never gonna let you down"
		|| str == "Never gonna run around and desert you"
		|| str == "Never gonna make you cry"
		|| str == "Never gonna say goodbye"
		|| str == "Never gonna tell a lie and hurt you"
		|| str == "Never gonna stop")
		return (true);
	return (false);
}

int main()
{
	fast;
	int n;
	string str;

	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++) {
		getline(cin, str);
		if (!is_promised(str)) {
			cout << "Yes";
			return (0);
		}
	}
	cout << "No";
	return (0);
}