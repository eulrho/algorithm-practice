// 주사위
#include <iostream>
#define MAX 101
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s1, s2, s3, max=0, index;
    int addResult[MAX] = {0,};

    cin >> s1 >> s2 >> s3;

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                addResult[i + j + k]++;
            }
        }
    }

    for(int i=1; i<MAX; i++){
        if(addResult[i]>max) {
            max = addResult[i];
            index=i;
        }
    }

    cout << index;

    return 0;
}