// 중요한 단어를 스포 방지
#include <string>
#include <vector>
#include <set>

using namespace std;

bool check_range(int str_s, int str_e, int ran_s, int ran_e) {
	return !(str_s > ran_e || str_e <= ran_s);
}

int solution(string message, vector<vector<int>> spoiler_ranges) {
	int answer = 0;
	set<string> words;
	vector<string> spoiler;
	int size = (int)message.size(), m_idx = 0;
	int s_idx = 0, range_cnt = (int)spoiler_ranges.size();
	while (m_idx < size) {
		if (message[m_idx] == ' ') m_idx++;
		while (s_idx < range_cnt - 1 && spoiler_ranges[s_idx][1] < m_idx) s_idx++;

		int start = m_idx, end = m_idx + 1;
		while (end < size && message[end] != ' ') end++;

		string new_word = message.substr(start, end - start);
		if (check_range(start, end, spoiler_ranges[s_idx][0], spoiler_ranges[s_idx][1]))
			spoiler.push_back(new_word);
		else words.insert(new_word);
		m_idx = end;
	}
	for (auto s : spoiler) {
		if (words.find(s) == words.end()) {
			answer++;
			words.insert(s);
		}
	}
	return answer;
}