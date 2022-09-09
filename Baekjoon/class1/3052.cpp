// 나머지
/*
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i, remainder[10]={}, * p, count=0;

	for (int j = 0; j < 10; j++) {
		cin >> i;
		remainder[j] = i % 42;
	}

	for (int j = 0; j < 10; j++) {
		p = find(remainder+j+1, remainder + 10, remainder[j]);
		if (p == remainder + 10) count++;
	}

	cout << count;


	return 0;
}