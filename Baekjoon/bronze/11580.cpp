// Footprint
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool logs[2002][2002] = {false,};

enum {
	E, W, S, N
};

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

#define MINUS_INDEXING(n) (n < 0 ? abs(n) + 1000 : n)

int main()
{
	fast;
	int n; string str;
	cin >> n >> str;

	logs[0][0] = true;
	int x = 0, y = 0, cnt=1, tmp_x, tmp_y;
	for (int i=0; i<n; i++) {
		if (str[i] == 'E')  { x += dx[E]; y += dy[E]; }
		else if (str[i] == 'W') { x += dx[W]; y += dy[W]; }
		else if (str[i] == 'S') { x += dx[S]; y += dy[S]; }
		else { x += dx[N]; y += dy[N]; }

		tmp_x = MINUS_INDEXING(x), tmp_y = MINUS_INDEXING(y);
		if (!logs[tmp_y][tmp_x]) cnt++;
		logs[tmp_y][tmp_x] = true;
	}

	cout << cnt;
	return (0);
}