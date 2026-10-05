// 충돌의 수
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct ball {
	int pos;
	char direction;
};

int board[1001] = {-1};

void simulation(vector<ball> info, int left, int right, int n, int t)
{
	int cnt=0;
	for (int i=0; i<t; i++) {
		for (int j=0; j<n; j++) {
			if (info[i].direction == 'R') info[i].pos++;
			else info[i].pos--;
			if (info[i].pos == left || info[i].pos == right) {
				if (info[i].direction == 'R') info[i].direction = 'L';
				else info[i].direction = 'R';
			}
		}
	}
}

int main()
{
	fast;
	int l, n, t; cin >> l >> n >> t;
	int left = 0, right = l;
	vector<ball> info(n);
	for (int i=0; i<n; i++) {
		cin >> info[i].pos >> info[i].direction;
		board[info[i].pos] = i;
	}

	return (0);
}