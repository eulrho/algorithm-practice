// 테트로미노
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n, m;
int board[500][500] = {0};

int case1() {
	int max_sum = 0;
	for (int i=0; i<n; i++) {
		int sum = 0;
		for (int j=0; j<4; j++) sum += board[i][j];
		max_sum = max(max_sum, sum);
		for (int j=1; j<m-3; j++) {
			sum = sum - board[i][j - 1] + board[i][j + 3];
			max_sum = max(max_sum, sum);
		}
	}
	for (int i=0; i<m; i++) {
		int sum = 0;
		for (int j=0; j<4; j++) sum += board[j][i];
		max_sum = max(max_sum, sum);
		for (int j=1; j<n-3; j++) {
			sum = sum - board[j - 1][i] + board[j + 3][i];
			max_sum = max(max_sum, sum);
		}
	}
	return max_sum;
}

int case2() {
	int max_sum = 0;
	for (int i=0; i<n-1; i++) {
		int sum = 0;
		sum += board[i][0] + board[i][1] + board[i + 1][0] + board[i + 1][1];
		max_sum = max(max_sum, sum);
		for (int j=1; j<m-1; j++) {
			sum = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 1][j + 1];
			max_sum = max(max_sum, sum);
		}
	}
	return max_sum;
}

int other_case() {
	int max_sum = 0;
	for (int i=0; i<n-1; i++) {
		int sum = 0;
		for (int j=0; j<m-2; j++) {
			if (j == 0) {
				for (int h=0; h<2; h++) {
					for (int k=0; k<3; k++) sum += board[i + h][k];
				}
			}
			else {
				for (int h=0; h<2; h++) sum -= board[i + h][j - 1];
				for (int h=0; h<2; h++) sum += board[i + h][j + 2];
			}
			int tmp;
			// case 3
			for (int h=0; h<2; h++) {
				for (int k=0; k<2; k++) {
					tmp = board[i + h][j + k] + board[i + h][j + k + 1];
					max_sum = max(max_sum, sum - tmp);
				}
			}
			//case 4
			tmp = board[i][j] + board[i + 1][j + 2];
			max_sum = max(max_sum, sum - tmp);
			tmp = board[i][j + 2] + board[i + 1][j];
			max_sum = max(max_sum, sum - tmp);
			//case 5
			tmp = board[i][j] + board[i][j + 2];
			max_sum = max(max_sum, sum - tmp);
			tmp = board[i + 1][j] + board[i + 1][j + 2];
			max_sum = max(max_sum, sum - tmp);
		}
	}
	for (int i=0; i<n-2; i++) {
		int sum = 0;
		for (int j=0; j<m-1; j++) {
			if (j == 0) {
				for (int h=0; h<3; h++) {
					for (int k=0; k<2; k++) sum += board[i + h][k];
				}
			}
			else {
				for (int h=0; h<3; h++) sum -= board[i + h][j - 1];
				for (int h=0; h<3; h++) sum += board[i + h][j + 1];
			}
			int tmp;
			// case 3
			for (int h=0; h<2; h++) {
				for (int k=0; k<2; k++) {
					tmp = board[i + k][j + h] + board[i + k + 1][j + h];
					max_sum = max(max_sum, sum - tmp);
				}
			}
			//case 4
			tmp = board[i + 2][j] + board[i][j + 1];
			max_sum = max(max_sum, sum - tmp);
			tmp = board[i][j] + board[i + 2][j + 1];
			max_sum = max(max_sum, sum - tmp);
			//case 5
			tmp = board[i][j] + board[i + 2][j];
			max_sum = max(max_sum, sum - tmp);
			tmp = board[i][j + 1] + board[i + 2][j + 1];
			max_sum = max(max_sum, sum - tmp);
		}
	}
	return max_sum;
}

int main()
{
	fast;
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	int result = case1();
	result = max(result, case2());
	result = max(result, other_case());
	cout << result;
	return (0);
}