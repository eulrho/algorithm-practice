// 합격자 찾기
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t, n, score, cnt; 
	float average;
	cin >> t;
	
	vector<int> scores;
	for(int i=0; i<t; i++){
		cin >> n;
		cnt=0;
		average=0;
		for(int j=0; j<n; j++) {
			cin >> score;
			average += (float)score;
			scores.push_back(score);
		}
		average /= n;
		for(int s:scores){
			if(s >= average) cnt++;
		}
		cout << cnt << '/' << n << "\n";
		scores.clear();
		vector<int>().swap(scores);
	}
	
	return 0;
}