// 내 학점을 구해줘
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int T; cin >> T;
	cout.precision(1);
	cout << fixed;
	for (int i=0; i<T; i++) {
		int N;
		cin >> N;
		int C, credit = 0;
		double G, gpa = 0;
		for (int j=0; j<N; j++) {
			cin >> C >> G;
			credit += C;
			gpa += G * C;
		}
		gpa /= credit;
		cout << credit << " " << gpa << '\n';
	}
	return (0);
}