// 스캐너
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;

	char scan;
	string res[r * zr];
	int idx = 0;
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			cin >> scan;
			for (int k=0; k<zr; k++) {
				for (int h=0; h<zc; h++)
					res[idx + k] += scan;
			}
		}
		idx += zr;
	}
	for (int i=0; i<r*zr; i++) cout << res[i] << '\n';
	return (0);
}