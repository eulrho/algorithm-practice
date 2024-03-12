// 제리와 톰
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_solution(int *a, int *b)
{
	for (int i=4; i>=2; i--) {
		if (*a % i == 0 && *b % i == 0) {
			*a /= i;
			*b /= i;
			break ;
		}
	}
}

int main()
{
	fast;
	int a, b, temp;

	cin >> a >> b;
	temp = b - a;
	find_solution(&temp, &b);
	cout << temp << ' ' << b;
	return (0);
}