// 배열에서 자리 바꾸기
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
	struct node* cur = NULL;
};

void init(linked_lst& head, node** array, int n) {
	for (int i=1; i<=n; i++) {
		array[i] = new node(NULL, i, NULL);
		if (i != 1) {
			array[i]->prev = array[i - 1];
			array[i - 1]->next = array[i];
		}
	}
	head.cur = array[1];
}

void case1(node* range1[], node* range2[]) {
	node* tmp = range1[0]->prev;
	if (range1[0]->prev != NULL)
		range1[0]->prev->next = range2[0];
	range1[0]->prev = range2[0]->prev;
	if (range2[0]->prev != NULL)
		range2[0]->prev->next = range1[0];
	range2[0]->prev = tmp;

	tmp = range1[1]->next;
	if (range1[1]->next != NULL)
		range1[1]->next->prev = range2[1];
	range1[1]->next = range2[1]->next;
	if (range2[1]->next != NULL)
		range2[1]->next->prev = range1[1];
	range2[1]->next = tmp;
}

void case2(node* range1[], node* range2[]) {
	node* tmp;
	if (range2[1]->next == range1[0]) {
		tmp = range1[0];
		range1[0] = range2[0];
		range2[0] = tmp;
		tmp = range1[1];
		range1[1] = range2[1];
		range2[1] = tmp;
	}
	tmp = range1[0]->prev;
	if (range1[0]->prev != NULL)
		range1[0]->prev->next = range2[0];
	range2[0]->prev = tmp;
	range1[1]->next = range2[1]->next;
	if (range2[1]->next != NULL)
		range2[1]->next->prev = range1[1];
	range2[1]->next = range1[0];
	range1[0]->prev = range2[1];
}

void swap(linked_lst& head, node** array, int a, int b, int c, int d) {
	node* range1[] = {array[a], array[b]};
	node* range2[] = {array[c], array[d]};

	if (range1[1]->next == range2[0] || range2[1]->next == range1[0])
		case2(range1, range2);
	else case1(range1, range2);

	if (head.cur == array[a]) head.cur = array[c];
	else if (head.cur == array[c]) head.cur = array[a];
}

void print_node(linked_lst& head) {
	node* tmp = head.cur;
	while (true) {
		cout << tmp->num << " ";
		tmp = tmp->next;
		if (tmp == NULL) break ;
	}
	cout << '\n';
}

int main() {
	fast;
	int n, q;
	cin >> n >> q;
	node** array = new node*[n + 1];
	linked_lst head;
	init(head, array, n);
	int a, b, c, d;
	for (int k=0; k<q; k++) {
		cin >> a >> b >> c >> d;
		swap(head, array, a, b, c, d);
		print_node(head);
	}
	print_node(head);
	exit(0);
	return (0);
}