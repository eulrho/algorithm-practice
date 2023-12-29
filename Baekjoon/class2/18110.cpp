// solved.ac
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, result=0, difficulty, sum=0, x;
	vector<int> v;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> difficulty;
		v.push_back(difficulty);
	}
	sort(v.begin(), v.end());
	if (n != 0) {
		x = (int)(floor(n * 0.15 + 0.5));
		for (int i=x; i<n-x; i++)
			sum += v[i];
		result = (int)floor((double)sum / (n - 2 * x) + 0.5);
	}
	cout << result;
	return (0);
}