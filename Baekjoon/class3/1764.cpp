// 듣보잡
#include <iostream>
#include <map>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

map<string, int> listen;
map<string, int> result;
int idx;

int main()
{
	fast;
	int n, m;
	string name, see;

	cin >> n >> m;
	for (int i=0; i<n; i++)
	{
		cin >> name;
		listen.insert({name, i});
	}
	for (int i=0; i<m; i++)
	{
		cin >> see;
		if (listen.find(see) != listen.end())
		{
			result.insert({see, idx});
			idx++;
		}
	}
	cout << idx << '\n';
	for (auto r : result)
		cout << r.first << '\n';
	return (0);
}