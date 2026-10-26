// 알파벳 동물
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(void) {
    string name; cin >> name;
    int n; cin >> n;
    string tmp;
    map<char, vector<string>> valid_cases;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        valid_cases[tmp[0]].push_back(tmp);
    }
    char target = name[name.size() - 1];
    if (valid_cases.find(target) == valid_cases.end()) cout << "?";
    else {
        string res = valid_cases[target][0];
        for (auto& n : valid_cases[target]) {
            char tmp = n.size() - 1;
            if (valid_cases.find(n[tmp]) == valid_cases.end()
                || (valid_cases[n[tmp]].size() == 1 && valid_cases[n[tmp]][0] == n)) {
                res = n + "!";
                break ;
            }
        }
        cout << res;
    }
    return 0;
}