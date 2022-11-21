// 농구 경기
#include <iostream>
#include <vector>
#define MAX 26
using namespace std;

void FindPlayer(int*array){
    int ptr=0;
    for(int i=0; i<MAX; i++){
        if(array[i]>=5) {
            ptr = 'a'+i;
            cout << (char)ptr;
        }
        if(i==MAX-1&&ptr==0)
        {
            cout << "PREDAJA";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, alpha[MAX]={0,}; string name;
    cin >> n;
    vector<string>names;

    for(int i=0; i<n; i++){
        cin >> name;
        names.push_back(name);
        alpha[name[0]-'a']++;
    }
    FindPlayer(alpha);

    return 0;
}
