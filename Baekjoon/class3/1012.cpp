// 유기농 배추
#include <iostream>
#include <queue>
#include <cstring>

#define MAX 51
using namespace std;

int location[MAX][MAX];
int visited[MAX][MAX];
queue<pair<int, int>>q;
int y_dir[4] = {0, 0, 1, -1};
int x_dir[4] = {1, -1, 0, 0};

void bfs(int *count, int n, int m, int i, int j){
    q.push(make_pair(i, j));
    *count+=1;
    visited[i][j]=1;
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for(int i=0; i<4; i++){
            int y_new = y+y_dir[i];
            int x_new = x+x_dir[i];

            if ((y_new>=0&&y_new<=n)&&(x_new>=0&&x_new<=m))
                if(!visited[y_new][x_new]&&location[y_new][x_new]==1){
                    visited[y_new][x_new] = 1;
                    q.push(make_pair(y_new, x_new));
                }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, m, n, k, x, y, count=0;
    cin >> t;
    for(int l=0; l<t; l++){
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            location[y][x]=1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j]==0&&location[i][j]==1) {
                    bfs(&count, n, m, i, j);
                }
            }
        }
        cout << count << "\n";
        memset(location, 0, sizeof(location));
        memset(visited, 0, sizeof(visited));
        count=0;
    }

    return 0;
}
