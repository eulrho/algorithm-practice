// 사격 내기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int scoreSet[] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

void setArray(bool *arr, int score) {
	for (int i=0; i<10; i++) {
		if (score < scoreSet[i]) continue ;
		score -= scoreSet[i];
		arr[i] = true;
	}
}

int main()
{
	fast;
	int a, b; cin >> a >> b;
	bool arrA[10] = {false};
	bool arrB[10] = {false};
	setArray(arrA, a);
	setArray(arrB, b);

	int sum = 0;
	for (int i=0; i<10; i++) {
		if (arrA[i]^arrB[i]) sum += scoreSet[i];
	}
	cout << sum;
	return (0);
}