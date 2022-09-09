// 숫자의 개수
// 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int number, res=1, count[10]={}, len, idx;
	string stringRes;

	for (int i = 0; i < 3; i++) {
		cin >> number;
		res *= number;
	}
	
	stringRes = to_string(res);
	len = stringRes.length();

	for (int i = 0; i < len; i++) {
		idx = stringRes[i] - '0';
		count[idx]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << count[i] << endl;
	}
	return 0;
}