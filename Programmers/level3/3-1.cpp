// 봉인된 주문
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long pos_cnt[11];

bool cmp(string &s1, string &s2) {
	if (s1.size() == s2.size()) return s1 < s2;
	return s1.size() < s2.size();
}

long long find_seq(string str) {
	long long res = 0;
	int size = (int)str.size();
	for (int i = 0; i < size; i++)
		res += pos_cnt[i] * (str[size - i - 1] - 'a' + 1);
	return res;
}

void readjustValue(string &str, long long &seq, int idx) {
	seq += pos_cnt[idx];
	for (int i=(int)str.size() - 1; i>=0; i--) {
		if (str[i] != 'a') {
			str[i]--;
			return ;
		}
		if (i == 0) {
			str = str.substr(1);
			return ;
		}
		str[i] = 'z';
	}
}

string find_str(long long seq) {
	int idx = 0;
	string res;
	while (idx < 11 && pos_cnt[idx] <= seq) idx++;
	idx--;

	for (; idx >= 0; idx--) {
		while (seq / pos_cnt[idx] == 0) readjustValue(res, seq, idx + 1);
		char tmp = (seq / pos_cnt[idx]) - 1 + 'a';
		res += tmp;
		seq %= pos_cnt[idx];
	}
	return res;
}

string solution(long long n, vector<string> bans) {
	string answer = "";
	sort(bans.begin(), bans.end(), cmp);
	pos_cnt[0] = 1;
	for (int i=1; i<11; i++) pos_cnt[i] = pos_cnt[i - 1] * 26;

	long long tmp;
	for (int i=0; i<(int)bans.size(); i++) {
		if (find_seq(bans[i]) > n) break ;
		n++;
	}
	answer = find_str(n);
	return answer;
}