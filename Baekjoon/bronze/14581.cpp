// 팬들에게 둘러싸인 홍준
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    cin >> name;

    cout << ":fan::fan::fan:\n";
    cout << ":fan::" << name << "::fan:\n";
    cout << ":fan::fan::fan:";

    return 0;
}