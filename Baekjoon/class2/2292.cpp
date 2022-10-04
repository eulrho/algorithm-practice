// 벌집
#include <iostream>
using namespace std;

int main() {
	long long n, high, low; int count=1;
	cin >> n;

	high = 7; low = 2;
	while (low <= n) {
		count++;
		if (n <= high && n >= low)
			break;
		else if (n > high) {
			low = high + 1;
			high = low + 6*count - 1;
		}
	}
	
	cout << count;
	return 0;
}