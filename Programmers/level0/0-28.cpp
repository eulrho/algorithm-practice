// 배열 만들기 2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

char num[2] = {'0', '5'};

bool cmp(string a, string b)
{
	return (stoi(a) >= stoi(b));
}

void find_num(vector<int> &answer, string str_l, string str_r, string res)
{
	if (res.size() >= str_r.size())
		return ;
	else {
		string temp;

		for (int i=0; i<2; i++) {
			if (res == "" && i == 0) continue ;
			temp = res;
			temp += num[i];
			find_num(answer, str_l, str_r, temp);
			if (cmp(temp, str_l) && cmp(str_r, temp))
				answer.push_back(stoi(temp));
		}
	}
}

vector<int> solution(int l, int r) {
    vector<int> answer;
	string str_l = to_string(l);
	string str_r = to_string(r);
	string res="";

	find_num(answer, str_l, str_r, res);
	if (answer.empty()) answer.push_back(-1);
	else sort(answer.begin(), answer.end());
    return answer;
}

int main() {
	fast;
    int l = 20, r = 30;
    vector<int> result = solution(l, r);
    for (int i=0; i<result.size(); i++)
        cout << result[i] << " ";
    return (0);
}