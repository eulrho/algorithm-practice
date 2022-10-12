// 설탕 배달
#include <iostream>
using namespace std;

int main() {
	int n, count=2000, i=0, res; cin >> n;
	bool success = false;
	while(i<=1666){
		for (int j = 0; j <= 1000; j++) {
			res = i * 3 + j * 5;
			if (res == n && count > i + j) {
				count = i + j;
				success = true;
			}
			if (res >= n) break;
		}
		if (i * 3 >= n) break;
		else i++;
	}
	
	if (success == false) cout << -1;
	else cout << count;
		
	return 0;
}