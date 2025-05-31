// 수 정렬하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int heap[2001] = {0,};
int h_size = 1;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void heapify(int start) {
	for (int i=start; i * 2 < h_size; i++) {
		int min_value = heap[i * 2];
		if (i * 2 + 1 < h_size) min_value = min(min_value, heap[i * 2 + 1]);
		if (min_value < heap[i]) {
			if (min_value == heap[i * 2])
				swap(heap[i * 2], heap[i]);
			else swap(heap[i * 2 + 1], heap[i]);
			heapify(max(i / 2, 1));
			break ;
		}
	}
}

void insertHeap(int n) {
	heap[h_size++] = n;
	heapify(1);
}

void deleteHeap() {
	if (h_size == 1) return ;
	cout << heap[1] << '\n';
	swap(heap[1], heap[h_size - 1]);
	h_size--;
	heapify(1);
}

int main()
{
	fast;
	int n; cin >> n;

	int number;
	for (int i=0; i<n; i++) {
		cin >> number;
		insertHeap(number);
	}
	while (h_size != 1)
		deleteHeap();
	return (0);
}