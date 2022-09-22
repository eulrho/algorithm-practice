// 스택 수열
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, number = 1, j = 0;
	cin >> n;

	vector<int> sequence(n);
	stack<int> stack;
	vector<char> res;

	for (int &s: sequence){
		cin >> s;
	}

	stack.push(number);
	res.push_back('+');

	while (!sequence.empty()) {
		if ((!stack.empty())&&(stack.top() == sequence[0])) {
			stack.pop();
			sequence.erase(sequence.begin());
			res.push_back('-');
		}
		else { 
			number++;
			stack.push(number);
			res.push_back('+');
		}
		
		if (number > n) {
			cout << "NO";
			break;
		}
	}

	if (number == n)
		for (char r : res) cout << r << "\n";

	return 0;
}