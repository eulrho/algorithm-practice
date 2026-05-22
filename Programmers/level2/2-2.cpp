// 피로도
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int max_cnt = 0;

void play(int k, vector<vector<int>> &dungeons, int *visited, int cnt) {
	int size = (int)dungeons.size();
	bool flag = false;
	for (int i=0; i<size; i++) {
		if (visited[i] == 0 && dungeons[i][0] <= k) {
			flag = true;
			visited[i] = 1;
			play(k - dungeons[i][1], dungeons, visited, cnt + 1);
			visited[i] = 0;
		}
	}

	if (flag == false) max_cnt = max(max_cnt, cnt);
}

int solution(int k, vector<vector<int>> dungeons) {
	int answer = -1;
	int visited[5001] = {0};
	play(k, dungeons, visited, 0);
	answer = max_cnt;
	return answer;
}

int main()
{
	fast;
	int k = 80;
	vector<vector<int>> dungeons = {{80,20},{50,40},{30,10}};
	cout << solution(k, dungeons);
	return (0);
}