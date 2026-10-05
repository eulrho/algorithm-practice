// Guess the Animal
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, k; cin >> n;
	string animal, characteristic;
	map<string, vector<string>> questions;
	map<string, pair<string, int>> animals;

	for (int i=0; i<n; i++) {
		cin >> animal >> k;

		for (int j=0; j<k; j++) {
			cin >> characteristic;
			questions[characteristic].push_back(animal);
		}
	}

	for (map<string, vector<string>>::iterator iter=questions.begin(); iter!= questions.end(); iter++) {

	}
	return (0);
}