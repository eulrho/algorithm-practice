//Who is in the middle?
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int numbers[3];

	for (int i=0; i<3; i++)
		cin >> numbers[i];
	sort(numbers, numbers+3);
	cout << numbers[1];
	return (0);
}