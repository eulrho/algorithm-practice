// 통계학
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, middle, mode, arr[8001]={}, arithmetic = 0, range, most=-5000;
	bool not_first = false;
	cin >> n;

	vector<int> numbers(n);
	for (int& number : numbers) {
		cin >> number;
		arithmetic += number;
		arr[number + 4000]++;
	}

	sort(numbers.begin(), numbers.end());

	for (int j = 0; j < 8001; j++) {
		if (arr[j] == 0) continue;
		if(arr[j] == most)
			if (not_first) {
				mode = j - 4000;
				not_first = false;
			}
		if (arr[j] > most) {
			most = arr[j];
			mode = j - 4000;
			not_first = true;
		}
	}
	
	arithmetic = round((float)arithmetic/ n);
	middle = numbers[n / 2];
	range = numbers.back() - numbers.front();

	cout << arithmetic << "\n" << middle << "\n" << mode << "\n" << range;

	return 0;
}