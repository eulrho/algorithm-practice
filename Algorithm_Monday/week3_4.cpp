// 순환하는 수로
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[10001];
vector<int> visits(10001);
vector<int> cycle;

// u : 현재 노드, p : 이전 노드
int finded = -1;
void FindCycle(int u, int p){
    if (visits[u] == 1) {
        finded = u;
        cycle.push_back(u);
        return;
    }
    visits[u]=1;
    for(auto i:v[u]){
        if (i==p) continue;
        FindCycle(i, u);
        if(finded==-2) return;
        if(finded==u){
            finded=-2;
            return;
        }
        if(finded>=0){
            cycle.push_back(u);
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, a, b;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    FindCycle(1, 1);

    cout << cycle.size() << "\n";
    sort(cycle.begin(), cycle.end());
    for (auto c:cycle) {
        cout << c << " ";
    }

    return 0;
}
