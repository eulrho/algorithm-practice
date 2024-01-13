// 숨바꼭질
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define MAX_VALUE 150000
using namespace std;

typedef struct s_check {
	bool	is_visit = false;
	int		time;
} t_check;

t_check check[MAX_VALUE + 1];

int walk_or_teleport(int n, int k)
{
	queue<int>	queue;
	int			position;

	check[n].is_visit = true;
	check[n].time = 0;
	queue.push(n);
	while (!queue.empty()) {
		position = queue.front();
		if (position == k)
			break ;
		if (position - 1 >= 0 && !check[position - 1].is_visit) {
			check[position - 1].is_visit = true;
			check[position - 1].time = check[position].time + 1;
			queue.push(position - 1);
		}
		if (position + 1 <= MAX_VALUE && !check[position + 1].is_visit) {
			check[position + 1].is_visit = true;
			check[position + 1].time = check[position].time + 1;
			queue.push(position + 1);
		}
		if (position * 2 <= MAX_VALUE && !check[position * 2].is_visit) {
			check[position * 2].is_visit = true;
			check[position * 2].time = check[position].time + 1;
			queue.push(position * 2);
		}
		queue.pop();
	}
	return (check[k].time);
}

int main()
{
	fast;
	int n, k;

	cin >> n >> k;
	cout << walk_or_teleport(n, k);
	return (0);
}