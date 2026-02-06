// 가능한 수열 중 최솟값 구하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_end = false;

bool is_valid_seq(const string &seq, int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (seq[i] == seq[j]) {
				int tmp = 1;
				while (j + tmp < n && seq[i + tmp] == seq[j + tmp]) tmp++;
				if (i + tmp == j) return false;
				j += tmp - 1;
			}
		}
	}
	return true;
}

void find_first_seq(int n, string &seq, int depth) {
	if (is_end) return ;
	if (depth == n) {
		cout << seq;
		is_end = true;
		return ;
	}
	char arr[] = {'4', '5', '6'};
	for (int i=0; i<3; i++)
	{
		if (depth > 0 && seq[depth] == arr[i]) continue ;
		string new_seq = seq + arr[i];
		if (is_valid_seq(new_seq, depth + 1))
			find_first_seq(n, new_seq, depth + 1);
	}

}

int main()
{
	fast;
	int n; cin >> n;
	string seq;
	find_first_seq(n, seq, 0);
	return (0);
}