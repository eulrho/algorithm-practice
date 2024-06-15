// Photoshoot
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int *find_arr(int *b, int *a, int n, int a_idx)
{
	if (a_idx >= 1 && a[a_idx - 1] >= b[a_idx - 1]) return NULL;

	int *new_arr = new int[a_idx+1];
	for (int i=0; i<a_idx; i++) new_arr[i] = a[i];
	if (a_idx == n - 1) {
		new_arr[a_idx] = b[a_idx-1] - new_arr[a_idx-1];
		for (int i=0; i<a_idx; i++) {
			for (int j=0; j<a_idx; j++) {
				if (i == j) continue ;
				if (new_arr[i] == new_arr[j]) {
					delete []new_arr;
					return NULL;
				}
			}
		}
		return new_arr;
	}
	int *tmp;
	for (int i=1; i<b[a_idx]; i++) {
		if (a_idx == 0 || new_arr[a_idx-1] + i == b[a_idx-1]) {
			new_arr[a_idx] = i;
			tmp = find_arr(b, new_arr, n, a_idx + 1);
			if (tmp != NULL) {
				delete []new_arr;
				return tmp;
			}
		}
	}
	delete []new_arr;
	return NULL;
}

int main()
{
	fast;
	int n; cin >> n;
	int *b, *a, *res;

	b = new int[n];
	a = new int[0];
	for (int i=0; i<n-1; i++) cin >> b[i];
	res = find_arr(b, a, n, 0);
	for (int i=0; i<n; i++) cout << res[i] << ' ';
	delete []b;
	delete []a;
	return 0;
}
