#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, k; string name; float height;
	cin >> n >> k;
	vector<pair<string, float>> persons;
	for (int i = 0; i < n; i++) {
		cin >> name >> height;
		persons.push_back(pair<string, float>(name, height));
	}
	sort(persons.begin(), persons.end());

	printf("%s %.2f", persons[k-1].first.c_str(), persons[k-1].second);
	return 0;
}