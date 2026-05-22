// 전화번호 목록
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool find_prefix(vector<string>& phone_book, set<string>& info) {
	for (auto p:phone_book) {
		for (int i=0; i<(int)p.size(); i++) {
			if (info.find(p.substr(0, i)) != info.end())
				return false;
		}
	}
	return true;
}

bool solution(vector<string> phone_book) {
	bool answer = true;
	set<string> info;
	for (auto p : phone_book)
		info.insert(p);
	answer = find_prefix(phone_book, info);
	return answer;
}

int main()
{
	fast;
	vector<string> p = {"123","456","789"};
	cout << solution(p);
	return (0);
}