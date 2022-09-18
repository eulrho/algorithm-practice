// 체스판 다시 칠하기
#include <iostream>
#include <algorithm>
using namespace std;

int WB_cnt(string WB[], string board[], int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != WB[i][j])
				count++;
		}
	}
	return count;
}

int BW_cnt(string BW[], string board[], int x, int y) {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != BW[i][j])
				count++;
		}
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
	};

	string BW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
	};

	int n, m, min_val = 100000;
	cin >> n >> m;

	string board[50];
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	
	for (int i = 0; i < n-7; i++) {
		for (int j = 0; j < m-7; j++) {
			int tmp, wb, bw;
			tmp = min(WB_cnt(WB, board, i, j), BW_cnt(BW, board, i, j));
			if (tmp < min_val) {
				min_val = tmp;
			}
		}
	}

	cout << min_val << "\n";

	return 0;
}