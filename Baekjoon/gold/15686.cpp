// 치킨 배달
#include <iostream>
#include <vector>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define DISTANCE(r1, c1, r2, c2) (abs(r1 - r2) + abs(c1 - c2))

int n, m;
int board[50][50];
int result = 100000;

struct chicken {
	int y, x;
	bool isOpen = true;
};

int calculate_dist(vector<pair<int, int>> &house, vector<chicken> &store) {
	int distance[101];
	for (int i=0; i<(int)house.size(); i++) distance[i] = 100;

	for (int i=0; i<(int)store.size(); i++) {
		if (store[i].isOpen) {
			for (int k=0; k<(int)house.size(); k++)
				distance[k] = min(DISTANCE(store[i].y, store[i].x, house[k].first, house[k].second), distance[k]);
		}
	}

	int tmp = 0;
	for (int k=0; k<(int)house.size(); k++)
		tmp += distance[k];
	return tmp;
}

void close_store(vector<pair<int, int>> &house, vector<chicken> &store, int idx, int store_cnt) {
	if (store_cnt == m) {
		int tmp = calculate_dist(house, store);
		result = min(result, tmp);
		return ;
	}
	for (int i=idx; i<(int)store.size(); i++) {
		store[i].isOpen = false;
		close_store(house, store, i + 1, store_cnt - 1);
		store[i].isOpen = true;
	}
}

int main() {
	fast;
	cin >> n >> m;

	vector<pair<int, int>> house;
	vector<chicken> store;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) house.push_back({i, j});
			else if (board[i][j] == 2) store.push_back({i, j});
		}
	}
	close_store(house, store, 0, store.size());
	cout << result;
	return (0);
}