// N 찍기
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
    // cin, cout 시간 줄이기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
    // endl보다 \n가 더 빠름
	for (int i = 1; i <= n; i++) {
		cout << i << "\n";
	}

	return 0;
}