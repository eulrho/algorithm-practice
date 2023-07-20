// 정수를 나선형으로 배치하기
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solution(int n){
    vector<vector<int>> answer(n, vector<int> (n, 0));
    int max = n*n;
    int col=0, row=0, max_col = n, max_row = n, num=1;

    while(num<=max) {
        for (int i = 0; i < max_col; i++) {
            answer[row][col] = num;
            col++;
            num++;
        }
        max_row--; col--; row++;

        for (int i = 0; i < max_row; i++) {
            answer[row][col] = num;
            row++;
            num++;
        }
        max_col--; row--; col--;

        for (int i = 0; i < max_col; i++) {
            answer[row][col] = num;
            col--;
            num++;
        }
        max_row--; col++; row--;

        for (int i = 0; i < max_row; i++) {
            answer[row][col] = num;
            row--;
            num++;
        }
        max_col--; row++; col++;
    }
    return answer;
}

int main(){
    int n = 5;
    vector<vector<int>> result = solution(n);
    cout << "[";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (j==0) cout << "[";
            cout << result[i][j];
            if (j==n-1) cout << "]";

            if(i==n-1 && j==n-1) continue;
            else cout << ", ";
        }
    }
    cout << "]";
    return 0;
}