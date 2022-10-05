// 최대공약수와 최소공배수
#include <iostream>
#define low(a, b) ((a)<(b)? a:b)

using namespace std;

int main() {
	int a, b, divisor, multiple;
	cin >> a >> b;

	divisor = low(a, b);
	while (divisor != 0) {
		if (a % divisor == 0 && b % divisor == 0) {
			multiple = divisor * (a / divisor) * (b / divisor);
			break;
		}
		else divisor--;
	}
	
	if (divisor != 0) cout << divisor << "\n" << multiple;
	
	return 0;
}