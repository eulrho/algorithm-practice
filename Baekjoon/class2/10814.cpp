// 나이순 정렬
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct member {
	int age, idx;
	string name;
}Member;

bool cmp(const Member &m1, const Member &m2) {
	if (m1.age != m2.age) return m1.age < m2.age;
	if (m1.age == m2.age) return m1.idx < m2.idx;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<Member> mvector(n);
	for (int i = 0; i < n; i++) {
		cin >> mvector[i].age >> mvector[i].name;
		mvector[i].idx = i;
	}

	sort(mvector.begin(), mvector.end(), cmp);

	for (int i = 0; i < n; i++) cout << mvector[i].age << ' ' <<  mvector[i].name << "\n";

	return 0;
}