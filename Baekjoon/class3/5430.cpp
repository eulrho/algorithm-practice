// AC
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n;
bool rev;

void run_D(deque<int> &dq)
{
	if (!rev)
		dq.pop_front();
	else
		dq.pop_back();
	n--;
}

void run_R()
{
	if (rev) rev = false;
	else rev = true;
}

void parsing(deque<int> &dq, string arr)
{
	int size = (int)arr.size(), start, idx=0;

	for (int i=0; i<size; i++) {
		if (arr[i] == '[' || arr[i] == ']' || arr[i] == ',')
			continue ;
		start = i;
		while (arr[i] != '[' && arr[i] != ']' && arr[i] != ',')
			i++;
		dq.push_back(stoi(arr.substr(start, i-start)));
		idx++;
		i--;
	}
}

int run_command(deque<int> &dq, string p)
{
	int command_count = (int)p.size(), flag = 1;

	for (int j=0; j<command_count; j++) {
		if (p[j] == 'R' && n != 0) run_R();
		else if (p[j] == 'D' && n != 0) run_D(dq);
		else if (p[j] == 'D' && n == 0) {
			flag = 0;
			break ;
		}
	}
	return (flag);
}

void print_result(deque<int> &dq)
{
	cout << '[';
	if (!rev) {
		for (int j=0; j<n; j++) {
			cout << dq[j];
			if (j != n - 1) cout << ',';
		}
	}
	else {
		for (int j=n-1; j>=0; j--) {
			cout << dq[j];
			if (j != 0) cout << ',';
		}
	}
	cout << "]\n";
}

int main()
{
	fast;
	deque<int> dq;
	int t;
	string p, arr;

	cin >> t;
	for (int i=0; i<t; i++) {
		rev = false;
		dq = deque<int> ();
		cin >> p >> n >> arr;
		parsing(dq, arr);
		if (!run_command(dq, p)) cout << "error\n";
		else print_result(dq);
	}
	return (0);
}