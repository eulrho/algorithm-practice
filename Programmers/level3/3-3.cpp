// 정수 삼각형
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int solution(vector<vector<int>> triangle) {
	int answer = 0;
	int size = (int)triangle.size();
	vector<vector<int>> sum(size);
	sum[0].push_back(triangle[0][0]);
	for (int i=1; i<size; i++) {
		for (int j=0; j<triangle[i].size(); j++) {
			int tmp = 0;
			if (j != triangle[i].size() - 1) tmp = sum[i-1][j];
			if (j != 0) tmp = max(tmp, sum[i-1][j-1]);
			sum[i].push_back(tmp + triangle[i][j]);
		}
	}
	for (auto result : sum[size - 1])
		answer = max(answer, result);
	return answer;
}

int main()
{
	fast;
	vector<vector<int>> triangle = {{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}};
	cout << solution(triangle);
	return (0);
}