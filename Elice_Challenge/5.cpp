// 수열 복원
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int n;

void find_number(vector<int> arr)
{
	vector<int> number;
	vector<int> sum_result;
	vector<int> q;

	number.push_back(arr[0]);
	number.push_back(arr[1]);
	sum_result.push_back(arr[0]);
	sum_result.push_back(arr[1]);
	sum_result.push_back(arr[0] + arr[1]);
	q.push_back(arr[0] + arr[1]);

	arr = vector<int>(arr.begin()+2, arr.end());
	for (int i=2; i<n; i++) {
		vector<int> new_arr;

		for (int j=0; j<(int)arr.size(); j++) {
			auto iter = find(q.begin(), q.end(), arr[j]);
			if (iter != q.end())
				q.erase(iter);
			else new_arr.push_back(arr[j]);
		}
		sort(new_arr.begin(), new_arr.end());
		number.push_back(new_arr[0]);
		arr = vector<int>(new_arr.begin() + 1, new_arr.end());

		int size = (int)sum_result.size();
		sum_result.push_back(new_arr[0]);
		for (int j=0; j<size; j++)
		{
			q.push_back(sum_result[j] + new_arr[0]);
			sum_result.push_back(sum_result[j] + new_arr[0]);
		}
	}
	for (int i=0; i<n; i++) cout << number[i] << ' ';
}

int main() {
	cin >> n;
	int num;
	int size; size = (int)pow(2, n);
	vector<int> arr;

	for (int i=0; i<size; i++) {
		cin >> num;
		if (num != 0) arr.push_back(num);
	}
	sort(arr.begin(), arr.end());
	if (n == 1) cout << arr[0];
	else find_number(arr);
	return (0);
}
