// A + B -5
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	int a, b;

	while (1) {
		cin >> a >> b;

		if (a == 0 && b == 0) break;
		cout << a + b << endl;
	}
	
	return 0;
}