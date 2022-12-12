// 뜨거운 붕어빵
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; string line, str;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> line;
        for(int j=m-1; j>=0; j--){
            cout << line[j];
        }
        cout << "\n";
    }

    return 0;
}