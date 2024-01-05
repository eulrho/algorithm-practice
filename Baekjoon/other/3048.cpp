// 개미
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n1, n2, t;
string group1, group2;

void set_str(string &res)
{
	int i = 0;

	while (i < n1) {
		res += '0';
		i++;
	}
	i = 0;
	while (i < n2) {
		res += '1';
		i++;
	}
}

string jump()
{
	string res="";
	int size;

	set_str(res);
	size = (int)res.size();
	for (int i=1; i<=t; i++) {
		for (int j=1; j<size; j++) {
			if (res [j-1] == '0' && res[j] == '1') {
				res[j] = '0';
				res[j-1] = '1';
				j++;
			}
		}
	}
	return (res);
}

int main()
{
	fast;
	string res;
	int n1_idx, n2_idx;

	cin >> n1 >> n2 >> group1 >> group2 >> t;
	res = jump();
	n1_idx = n1 - 1;
	n2_idx = 0;
	for (int i=0; i<res.size(); i++) {
		if (res[i] == '0') {
			cout << group1[n1_idx];
			n1_idx--;
		}
		else {
			cout << group2[n2_idx];
			n2_idx++;
		}
	}
	return (0);
}