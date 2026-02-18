// 책꽂이 정리
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

struct node {
	struct node* prev = NULL;
	int num;
	struct node* next = NULL;

	node(node* prev, int num, node* next) : prev(prev), num(num), next(next) {}
};

struct linked_lst {
	struct node* head = NULL;
	struct node* tail = NULL;
	int cnt = 0;
};

void init(linked_lst* bookshelf, int n) {
	bookshelf[1].head = new node(NULL, 1, NULL);

	node* prev = bookshelf[1].head;
	for (int i=2; i<=n; i++) {
		node *new_node = new node(prev, i, NULL);
		prev->next = new_node;
		prev = new_node;
	}
	bookshelf[1].tail = prev;
	bookshelf[1].cnt = n;
}

void print_node(linked_lst* bookshelf, int k) {
	for (int i=1; i<=k; i++) {
		cout << bookshelf[i].cnt << " ";
		if (bookshelf[i].cnt == 0) {
			cout << '\n';
			continue ;
		}
		node* tmp = bookshelf[i].head;
		while (true) {
			cout << tmp->num << " ";
			if (tmp == bookshelf[i].tail) break ;
			else tmp = tmp->next;
		}
		cout << '\n';
	}
}

void insert_back(linked_lst* bookshelf, int i, int j) {
	if (bookshelf[i].head == NULL) return ;
	node* tmp = bookshelf[i].head;
	bookshelf[i].head = bookshelf[i].head->next;
	if (bookshelf[i].head != NULL)
		bookshelf[i].head->prev = NULL;
	tmp->next = NULL;
	if (bookshelf[i].head == NULL) bookshelf[i].tail = NULL;
	if (bookshelf[j].head == NULL) {
		bookshelf[j].head = tmp;
		bookshelf[j].tail = tmp;
	}
	else {
		tmp->prev = bookshelf[j].tail;
		bookshelf[j].tail->next = tmp;
		bookshelf[j].tail = tmp;
	}
	bookshelf[j].cnt++;
	bookshelf[i].cnt--;
}

void insert_front(linked_lst* bookshelf, int i, int j) {
	if (bookshelf[i].head == NULL) return ;
	node* tmp = bookshelf[i].tail;
	bookshelf[i].tail = bookshelf[i].tail->prev;
	if (bookshelf[i].tail != NULL)
		bookshelf[i].tail->next = NULL;
	tmp->prev = NULL;
	if (bookshelf[i].tail == NULL) bookshelf[i].head = NULL;
	if (bookshelf[j].head == NULL) {
		bookshelf[j].head = tmp;
		bookshelf[j].tail = tmp;
	}
	else {
		tmp->next = bookshelf[j].head;
		bookshelf[j].head->prev = tmp;
		bookshelf[j].head = tmp;
	}
	bookshelf[j].cnt++;
	bookshelf[i].cnt--;
}

void move_front(linked_lst* bookshelf, int i, int j) {
	if (bookshelf[i].head == NULL || i == j) return ;
	if (bookshelf[j].head == NULL) {
		bookshelf[j].head = bookshelf[i].head;
		bookshelf[j].tail = bookshelf[i].tail;
	}
	else {
		bookshelf[i].tail->next = bookshelf[j].head;
		bookshelf[j].head->prev = bookshelf[i].tail;
		bookshelf[j].head = bookshelf[i].head;
	}

	bookshelf[i].head = NULL;
	bookshelf[i].tail = NULL;
	bookshelf[j].cnt += bookshelf[i].cnt;
	bookshelf[i].cnt = 0;
}

void move_back(linked_lst* bookshelf, int i, int j) {
	if (bookshelf[i].head == NULL || i == j) return ;
	if (bookshelf[j].head == NULL) {
		bookshelf[j].head = bookshelf[i].head;
		bookshelf[j].tail = bookshelf[i].tail;
	}
	else {
		bookshelf[i].head->prev = bookshelf[j].tail;
		bookshelf[j].tail->next = bookshelf[i].head;
		bookshelf[j].tail = bookshelf[i].tail;
	}
	bookshelf[i].head = NULL;
	bookshelf[i].tail = NULL;
	bookshelf[j].cnt += bookshelf[i].cnt;
	bookshelf[i].cnt = 0;
}

int main() {
	fast;
	int n, k, q;
	cin >> n >> k>> q;
	linked_lst* bookshelf = new linked_lst[k + 1];
	init(bookshelf, n);
	int cmd, i, j;
	for (int h=0; h<q; h++) {
		cin >> cmd >> i >> j;
		if (cmd == 1) insert_back(bookshelf, i, j);
		else if (cmd == 2) insert_front(bookshelf, i, j);
		else if (cmd == 3) move_front(bookshelf, i, j);
		else move_back(bookshelf, i, j);
	}
	print_node(bookshelf, k);
	exit(0);
	return (0);
}