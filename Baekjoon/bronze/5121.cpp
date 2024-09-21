// Alarmist
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_data_set(int *samples, int w, int n)
{
	int left=2, right=w+1;
	int min_value, max_value;

	min_value = max_value = samples[w] / w;
	while (right <= n) {
		int tmp = (samples[right] - samples[left-1]) / w;

		min_value = min(min_value, tmp);
		max_value = max(max_value, tmp);
		left++, right++;
	}
	return max_value - min_value;
}

int main()
{
	fast;
	int k, n, w;

	cin >> k;
	for (int i=1; i<=k; i++) {
		cin >> n >> w;

		int sample, samples[n+1];
		samples[0] = 0;
		for (int j=1; j<=n; j++) {
			cin >> sample;
			samples[j] = samples[j-1] + sample;
		}
		cout << "Data Set " << i << ":\n";
		cout << find_data_set(samples, w, n) << "\n\n";
	}
	return (0);
}