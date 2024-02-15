// 카드 게임
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int score, sum=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> score; sum += score;
	}

	cout << sum;
	
	return 0;
}