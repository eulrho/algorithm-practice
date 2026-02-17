// 연결리스트 2
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

struct node {
	struct node* prev = NULL;
	int num;
	struct node* next = NULL;

	node(node* prev, int num, node* next) : prev(prev), num(num), next(next) {}
};

void print_result(node** lst, int n) {
	for (int i=1; i<=n; i++) {
		if (lst[i]->next == NULL) cout << "0 ";
		else cout << lst[i]->next->num << " ";
	}
	cout << "\n";
}

void print_prev_next(node *cur) {
	if (cur->prev == NULL) cout << "0 ";
	else cout << cur->prev->num << " ";

	if (cur->next == NULL) cout << "0\n";
	else cout << cur->next->num << '\n';
}

void insert_prev(node *cur, node *target) {
	node* tmp = cur->prev;
	if (tmp != NULL) {
		tmp->next = target;
		target->prev = tmp;
	}
	cur->prev = target;
	target->next = cur;
}

void insert_next(node *cur, node *target) {
	node* tmp = cur->next;
	if (tmp != NULL) {
		tmp->prev = target;
		target->next = tmp;
	}
	cur->next = target;
	target->prev = cur;
}

void extract_node(node *cur) {
	if (cur->prev != NULL)
		cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;

	cur->prev = NULL;
	cur->next = NULL;
}

int main() {
	fast;
	int n, q;
	cin >> n >> q;
	node** lst = new node*[n + 1];
	for (int i=1; i<=n; i++) lst[i] = new node(NULL, i, NULL);
	int num, i, j;
	for (int k=0; k<q; k++) {
		cin >> num >> i;
		if (num == 1)
			extract_node(lst[i]);
		else if (num == 2) {
			cin >> j;
			insert_prev(lst[i], lst[j]);
		}
		else if (num == 3) {
			cin >> j;
			insert_next(lst[i], lst[j]);
		}
		else print_prev_next(lst[i]);
	}
	print_result(lst, n);
	exit(0);
	return (0);
}