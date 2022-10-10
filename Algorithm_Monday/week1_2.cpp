// 동명이인
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, cnt=0; string s, name;
	cin >> n >> s; 
	
	for(int i=0; i<n; i++){
		cin >> name;
		if(name.find(s) != string::npos) cnt++;
	}
	cout << cnt;
	return 0;
}