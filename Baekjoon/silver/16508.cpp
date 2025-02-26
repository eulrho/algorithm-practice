// 전공책
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int price_min = 1600001;

int n;

struct selections {
	int price;
	int alpha[26] = {0, };
};

void find_char(vector<selections> books, int books_idx, int current_price, map<char, int> target_alpha, int t_len)
{
	if (t_len == 0) {
		price_min = min(price_min, current_price);
		return ;
	}
	if (books.size() == books_idx) return ;

	find_char(books, books_idx + 1, current_price, target_alpha, t_len);

	int tmp = t_len;
	for (map<char, int>::iterator iter=target_alpha.begin(); iter!=target_alpha.end(); iter++) {
		if (iter->second && books[books_idx].alpha[iter->first - 'A']) {
			int diff = min(iter->second, books[books_idx].alpha[iter->first - 'A']);
			iter->second -= diff;
			books[books_idx].alpha[iter->first - 'A'] -= diff;
			tmp -= diff;
		}
	}

	if (tmp != t_len)
		find_char(books, books_idx + 1, current_price + books[books_idx].price, target_alpha, tmp);
}

int main()
{
	fast;
	string t, w;
	int c;
	cin >> t >> n;

	int t_len = (int)t.size();
	map<char, int> target_alpha;
	for (int i=0; i<t_len; i++) {
		if (target_alpha.find(t[i]) != target_alpha.end())
			target_alpha[t[i]]++;
		else target_alpha[t[i]] = 1;
	}

	vector<selections> books(n);
	for (int i=0; i<n; i++) {
		cin >> c >> w;
		books[i].price = c;
		for (int j=0; j<(int)w.size(); j++) {
			books[i].alpha[w[j] - 'A']++;
		}
	}

	find_char(books, 0, 0, target_alpha, t_len);
	if (price_min == 1600001) cout << -1;
	else cout << price_min;
	return (0);
}