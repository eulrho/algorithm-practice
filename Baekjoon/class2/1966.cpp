// 프린터 큐
#include <iostream>
#include <vector>
using namespace std;

int is_in_bigger(int m, int n, int number, vector<int>v) {
	for (int i = m; i < n; i++) {
		if (number <v[i]) return -1;
	}
	return 0;
}

int search_max (int n, vector<int>v) {
	int max=0;
	for (int i = 0; i < n; i++) {
		if (v[i] > max) max = v[i];
	}
	return max;
}

int main() {
	int t, n, m, count, tmp, max=0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		vector<int> numbers(n);
		for (int &num:numbers) {
			cin >> num;
		}

        count = 0;
		while (count != n) {
			if (numbers[0] == search_max(numbers.size(), numbers))
				if (m == 0) {
					cout << ++count << "\n";
					break;
				}
				else {
					numbers.erase(numbers.begin());
					count++;
					m--;
				}
            if (is_in_bigger(1, numbers.size(), numbers[0], numbers) == -1) {
				tmp = numbers[0];
				numbers.erase(numbers.begin());
				numbers.push_back(tmp);
				if (m == 0) m = numbers.size() - 1;
				else m--;
			}
			
		}
	}
	return 0;
}