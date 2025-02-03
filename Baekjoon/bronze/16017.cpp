// Telemarketer or not?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[4];
	for (int i=0; i<4; i++) cin >> arr[i];

	if ((arr[0] == 8 || arr[0] == 9) && (arr[3] == 8 || arr[3] == 9) && arr[1] == arr[2]) cout << "ignore";
	else cout << "answer";
	return (0);
}