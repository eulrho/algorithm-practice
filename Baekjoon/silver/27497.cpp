// 알파벳 블록
#include <iostream>
#include <deque>
#include <stack>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	deque<char> deq;
	stack<int> st;
	int n, seq;
	char ch;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> seq;
		if (seq != 3) cin >> ch;

		switch(seq) {
			case 1:
				deq.push_back(ch);
				st.push(seq);
				break ;
			case 2:
				deq.push_front(ch);
				st.push(seq);
				break ;
			case 3:
				if (st.empty() || deq.empty()) break ;
				if (st.top() == 1) deq.pop_back();
				else if (st.top() == 2) deq.pop_front();
				st.pop();
				break ;
		}
	}
	if (deq.empty()) cout << 0;
	else {
		for (int i=0; i<(int)deq.size(); i++)
			cout << deq[i];
	}
	return (0);
}