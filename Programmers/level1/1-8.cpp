// 완주하지 못한 선수
#include <iostream>
#include <string>
#include <map>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct INFO {
	int total = 0;
	int completion_num = 0;
};

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, INFO> info;
	for (auto s : participant)
	{
		if (info.find(s) != info.end()) info[s].total++;
		else info[s] = INFO{1, 0};
	}
	for (auto s : completion)
		info[s].completion_num++;
	for (auto i : info) {
		if (i.second.total - i.second.completion_num == 1) answer = i.first;
	}
	return answer;
}

int main()
{
	fast;
	vector<string> p = {"leo", "kiki", "eden"};
	vector<string> c = {"eden", "kiki"};
	cout << solution(p, c);
	return (0);
}