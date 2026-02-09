// 외판원 순회
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int min_cost = 100000;

void find_min_cost(int board[][10], int n, int *visited, int front, int sum, int cnt) {
	if (cnt == n - 1) {
		if (board[front][0] == 0) return ;
		int tmp = sum + board[front][0];
		min_cost = min(min_cost, tmp);
		return ;
	}
	for (int i=1; i<n; i++) {
		if (visited[i] == 0) {
			if (board[front][i] == 0) continue ;
			visited[i] = 1;
			find_min_cost(board, n, visited, i, sum + board[front][i], cnt + 1);
			visited[i] = 0;
		}
	}
}

int main()
{
	fast;
	int n; cin >> n;
	int board[10][10];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	vector<int> seq;
	int visited[10] = {0};
	find_min_cost(board, n, visited, 0, 0, 0);
	cout << min_cost;
	return (0);
}