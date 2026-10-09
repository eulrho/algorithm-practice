// ASCII 아트
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	long long n;
	for (int i=1; i<=t; i++) {
		cin >> n;
		long long seq = 1, total = 26;
		while (n > total) total += 26 * (++seq);
		n -= (total - 26 * (seq));
		n = (long long)ceil((double)n / seq);
		char res = 'A' + (n - 1);
		cout << "Case #" << i << ": " << res << '\n';
	}
	return (0);
}
/*
 * AAABBBCCCDDDEEE
 * ABCDE
 *
 * 4
 *
 * 1 000 000 000 000
 */