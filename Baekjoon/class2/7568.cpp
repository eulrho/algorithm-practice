// 덩치
#include <iostream>

using namespace std;

typedef struct bulk {
	int w;
	int h;
} Bulk;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x, y, rank=1; cin >> n;
	Bulk cases[50];
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cases[i].w = x;
		cases[i].h = y;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (cases[i].w < cases[j].w && cases[i].h < cases[j].h)
				rank++;
		}
		cout << rank << " ";
		rank = 1;
	}

	return 0;
} 