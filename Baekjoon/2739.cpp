// 구구단
// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
#include <iostream>
using namespace std;

void gugudan(int n) {
	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
}

int main() {
	int n;
	cin >> n;

	gugudan(n);

	return 0;
}