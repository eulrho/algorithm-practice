// 체육은 코딩과목 입니다
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	char arr[4] = {'N', 'E', 'S', 'W'};
	int direction, current=0;
	for (int i=0; i<10; i++) {
		cin >> direction;
		switch (direction) {
			case 1:
				if (++current == 4) current = 0;
				break;
			case 2:
				current += 2;
				if (current >= 4) current -= 4;
				break;
			case 3:
				if (--current == -1) current = 3;
				break;
		}
	}
	cout << arr[current];
	return (0);
}