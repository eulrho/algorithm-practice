// 과제 안 내신 분..?
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, student[31]={0,};
	for (int i = 0; i < 30; i++) {
		cin >> num;
		student[num]++;
	}

	for (int i = 1; i <= 30; i++){
		if (student[i] == 0) cout << i << "\n";
	}
	
	return 0;
}