// 연결 리스트 1
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct node {
	struct node* prev = NULL;
	string value;
	struct node* next = NULL;
};

void print_result(node *cur) {
	if (cur->prev == NULL) cout << "(Null) ";
	else cout << cur->prev->value << " ";

	cout << cur->value << " ";

	if (cur->next == NULL) cout << "(Null)\n";
	else cout << cur->next->value << '\n';
}

node* create_node(node* prev, string &value, node* next) {
	node* new_node = new node;
	new_node->prev = prev;
	new_node->value = value;
	new_node->next = next;
	return new_node;
}

void insert_prev(node *cur, string &value) {
	node* new_node = create_node(NULL, value, cur);

	node* tmp = cur->prev;
	if (tmp != NULL) {
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	cur->prev = new_node;
}

void insert_next(node *cur, string &value) {
	node* new_node = create_node(cur, value, NULL);

	node* tmp = cur->next;
	if (tmp != NULL) {
		tmp->prev = new_node;
		new_node->next = tmp;
	}
	cur->next = new_node;
}

int main()
{
	fast;
	string S_init;
	int n;
	cin >> S_init >> n;
	node* cur = new node;
	cur->value = S_init;
	int num;
	string value;
	for (int i=0; i<n; i++) {
		cin >> num;
		if (num == 1) {
			cin >> value;
			insert_prev(cur, value);
		}
		else if (num == 2) {
			cin >> value;
			insert_next(cur, value);
		}
		else if (num == 3) {
			if (cur->prev != NULL) cur = cur->prev;
		}
		else {
			if (cur->next != NULL) cur = cur->next;
		}
		print_result(cur);
	}
	exit(0);
	return (0);
}