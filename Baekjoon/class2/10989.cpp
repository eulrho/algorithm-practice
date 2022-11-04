//수 정렬하기 3
#include <iostream>
#include <vector>

#define NUMMAX 10001
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    int N; cin >> N;
    short nums;
    vector<short> count(NUMMAX, 0);

    for(int i=0; i<N; i++) {
        cin >> nums;
        count[nums]++;
    }

    for(int i=1; i<NUMMAX; i++) {
        if(count[i]!=0){
            for(short j=0; j<count[i]; j++) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}
