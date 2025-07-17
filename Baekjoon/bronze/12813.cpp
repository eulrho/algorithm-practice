// 이진수 연산
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string a, b; cin >> a >> b;
	string AandB, AorB, AxorB, notA, notB;
	for (int i=0; i<100000; i++) {
		AandB += (a[i] == b[i] && a[i] == '1') ? '1' : '0';
		AorB += (a[i] == b[i] && a[i] == '0') ? '0' : '1';
		AxorB += (a[i] == b[i]) ? '0' : '1';
		notA += (a[i] == '1') ? '0' : '1';
		notB += (b[i] == '1') ? '0' : '1';
	}
	cout << AandB << '\n' << AorB << '\n' << AxorB << '\n' << notA << '\n' << notB;
	return (0);
}