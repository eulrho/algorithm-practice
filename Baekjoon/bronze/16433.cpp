// 주디와 당근농장
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, r, c;

	 cin >> n >> r >> c;
	 bool is_first_carrot = (r % 2 != 0 && c % 2 != 0) || (r % 2 == 0 && c % 2 == 0);
	 for (int i=1; i<=n; i++) {
		 for (int j=1; j<=n; j++) {
			 if (is_first_carrot) {
				 if (i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0)
					 cout << 'v';
				 else cout << '.';
			 }
			 else {
				 if (i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0)
					 cout << '.';
				 else cout << 'v';
			 }

		 }
		 cout << '\n';
	 }
	return (0);
}