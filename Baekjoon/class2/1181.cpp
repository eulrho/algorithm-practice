// 단어정렬
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
1. 길이가 짧은 것부터
2. 길이가 같으면 사전 순으로
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string v1, string v2) {
	if (v1.length() == v2.length())
		return v1 < v2;
	else
		return v1.length() < v2.length();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> words(n);
	for (string& word : words) {
		cin >> word;
	}

	sort(words.begin(), words.end(), compare);
	words.erase(unique(words.begin(), words.end()), words.end());

	for (string word : words) {
		cout << word << "\n";
	}

	return 0;
}