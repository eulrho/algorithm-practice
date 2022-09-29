// 소수 찾기
#include <iostream>
using namespace std;

int main() {
	int n, number, count;
	cin >> n;

	count = n;
	while (n != 0){
		cin >> number;
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				count--;
				break;
			}
		}
		if (number == 1) count--;
		n--;
	}

	cout << count;

	return 0;
}