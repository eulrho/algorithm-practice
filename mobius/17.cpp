// 1차원 윷놀이
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int calculate_score(int m, int k, int *arr) {
	int res = 0;
	for (int i=0; i<k; i++) {
		if (arr[i] >= m) res++;
	}
	return res;
}

int max_total = 0;

void game(int n, int m, int k, int *dist, int *arr, int current) {
	if (current == n) {
		int tmp = calculate_score(m, k, arr);
		max_total = max(max_total, tmp);
		return ;
	}

	for (int i=0; i<k; i++) {
		arr[i] += dist[current];
		game(n, m, k, dist, arr, current + 1);
		arr[i] -= dist[current];
	}
}

int main()
{
	fast;
	int n, m, k; cin >> n >> m >> k;
	int dist[20];
	for (int i=0; i<n; i++) cin >> dist[i];
	int arr[10];
	for (int i=0; i<k; i++) arr[i] = 1;
	game(n, m, k, dist, arr, 0);
	cout << max_total;
	return (0);
}