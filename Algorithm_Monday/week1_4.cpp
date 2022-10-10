// 소수 찾기
#include <iostream>
using namespace std;
int is_prime_number(int n){
	for(int i=2; i<=n; i++){
		if(i==n) return 1;
		if(n%i==0) break;
	}
	return 0;
}
int main() {
	int n, sum=0, number;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> number;
		if(is_prime_number(i+1)==1) sum += number;
	}
	
	cout << sum;
	return 0;
}