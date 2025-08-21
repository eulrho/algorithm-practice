// Divide the Cash
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, d; cin >> n >> d;
	int arr[n], sum=0;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i=0; i<n; i++) cout << d / sum * arr[i] << '\n';
	return (0);
}