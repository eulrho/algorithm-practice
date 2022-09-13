// 숫자의 합
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, sum=0;
	cin >> t;

	string n;
	cin >> n;

	for (int i = 0; i < t; i++) {
		sum += (n[i] - '0');
	}
	
	cout << sum;

	return 0;
}