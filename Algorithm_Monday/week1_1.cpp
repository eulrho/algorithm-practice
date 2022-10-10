// 경로의 개수
#include <iostream>
using namespace std;
int main() {
	int n, count;
	long long res=1;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> count;
		res *= count;
	}
	
	cout << res;
	return 0;
}