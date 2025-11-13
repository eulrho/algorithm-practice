// 스트릿 코딩 파이터
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int A, B, C; cin >> A >> B >> C;
	int n; cin >> n;
	int total[1000] = {0};
	for (int j=0; j<n; j++) {
		int a, b, c;
		for (int i=0; i<3; i++) {
			cin >> a >> b >> c;
			total[j] += a * A + b * B + c * C;
		}
	}
	int max_score = 0;
	for (int i=0; i<n; i++) max_score = max(max_score, total[i]);
	cout << max_score;
	return (0);
}