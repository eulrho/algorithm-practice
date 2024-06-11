// 화분 부수기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool numbers[1000001];

int main()
{
	fast;
	int n, cnt=0, a, b, c;

	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a >> b >> c;
		if (numbers[a] == false && numbers[b] == false && numbers[c] == false)
			cnt++;
		numbers[a] = true;
		numbers[b] = true;
		numbers[c] = true;
	}
	cout << cnt;
	return (0);
}