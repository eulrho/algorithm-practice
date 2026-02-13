// 4가지 연산을 이용하여 1 만들기
#include <iostream>
#include <queue>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int arr[1000001] = {0};

bool is_visited(int new_num) {
	if (new_num < 0 || new_num >= 1000000 || arr[new_num] != 0) return false;
	return true;
}

int find_min_cnt(int n) {
	queue<int> q;
	arr[n] = 1;
	q.push(n);
	int current;
	while (!q.empty()) {
		current = q.front();
		q.pop();
		if (current == 1) break ;

		if (is_visited(current - 1))
		{
			q.push(current - 1);
			arr[current - 1] = arr[current] + 1;
		}
		if (is_visited(current + 1) && current % 3 != 0)
		{
			q.push(current + 1);
			arr[current + 1] = arr[current] + 1;
		}
		if (current % 2 == 0 && is_visited(current / 2))
		{
			q.push(current / 2);
			arr[current / 2] = arr[current] + 1;
		}
		if (current % 3 == 0 && is_visited(current / 3))
		{
			q.push(current / 3);
			arr[current / 3] = arr[current] + 1;
		}
	}
	return arr[1] - 1;
}

int main()
{
	fast;
	int n; cin >> n;
	cout << find_min_cnt(n);
	return (0);
}