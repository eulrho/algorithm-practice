// 최장 맨해튼 거리
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n1, n2, n3, n4, distance, res=0;
	cin >> n1 >> n2 >> n3 >> n4;
	
	// case 1
	distance = abs(n1-n2)+abs(n3-n4);
	if (distance > res) res = distance;
	// case 2
	distance = abs(n1-n3)+abs(n2-n4);
	if (distance > res) res = distance;
	// case 3
	distance = abs(n1-n4)+abs(n2-n3);
	if (distance > res) res = distance;
	
	cout << res;
	return 0;
}