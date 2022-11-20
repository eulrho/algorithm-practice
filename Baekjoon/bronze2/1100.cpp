// 하얀 칸
#include <iostream>

using namespace std;

void whitecount(string str, int *white, int num) {
    for (int j = num; j < 8; j += 2) {
        if (str[j] == 'F') *white += 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int white = 0, num;
    string chess;

    for (int i = 1; i <= 8; i++) {
        cin >> chess;
        if (i % 2 != 0) num = 0;
        else num = 1;
        whitecount(chess, &white, num);
    }

    cout << white;

    return 0;
}
