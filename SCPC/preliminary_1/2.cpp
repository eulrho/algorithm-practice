// 배달 150.0
#include <iostream>
#include <algorithm>

using namespace std;
#define fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

long long Answer;

int main(int argc, char** argv)
{
	fast;
	int T, test_case, n;
	//freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;

		cin >> n;
		int arr[n], sum;

		for (int i=0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		sum = arr[n-1] - arr[0];
		for (int i=0; i<n/4; i++) {
			Answer += (long long)sum * 2;
			sum -= (arr[i+1] - arr[i] + arr[n-1-i]-arr[n-2-i]);
		}

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}