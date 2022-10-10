// 폭탄 구현하기
#include <iostream>
using namespace std;
int main() {
	int n, k, a, b, cnt=0;
	cin >> n >> k;
	for(int i=0; i<k; i++){
		cin >> a >> b;
		cnt++; // bombs[a-1][b-1]
		if(a-1 > 0) cnt++; // bombs[a-2][b-1] (up)
		if(b-1 < n-1) cnt++; // bombs[a-1][b] (right)
		if(b-1 > 0) cnt++; // bombs[a-1][b-2] (left)
		if(a-1 < n-1) cnt++; // bombs[a-2][b-1] (down)
	}
	
	cout << cnt;
	
	return 0;
}