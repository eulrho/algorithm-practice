// Contaminated Milk
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int N, M, D, S, res=0;
	cin >> N >> M >> D >> S;
	int arr[D][3], p, t;
	bool dosage[S][51];

	for (int i=0; i<D; i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	for (int i=0; i<S; i++) {
		cin >> p >> t;
		for (int j=0; j<=M; j++) dosage[i][j] = false;
		for (int j=0; j<D; j++) {
			if (arr[j][0] == p && arr[j][2] < t)
				dosage[i][arr[j][1]] = true;
		}
	}
	for (int i=1; i<=M; i++) {
		bool flag = true;

		for (int j=0; j<S; j++) {
			if (dosage[j][i] == false) {
				flag = false;
				break ;
			}
		}
		if (flag == false) continue ;
		vector<int> cnt;

		for (int j=0; j<D; j++) {
			if (arr[j][1] == i) {
				if (find(cnt.begin(), cnt.end(), arr[j][0]) == cnt.end())
					cnt.push_back(arr[j][0]);
			}
		}
		if (res < (int)cnt.size()) res = (int)cnt.size();
	}
	cout << res;
	return 0;
}
