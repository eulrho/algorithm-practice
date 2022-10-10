// 철자 분리 집합
#include <iostream>
using namespace std;
int main() {
	int n, cnt=1; string s;
	cin >> n >> s;
	char front=s[0];
	for(int i=0; i<n; i++){
		if(front!=s[i]) {
			front = s[i];
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}