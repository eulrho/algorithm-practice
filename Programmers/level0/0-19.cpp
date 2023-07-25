// 안전지대
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int danger = 0;
    int n = board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 1) {danger++; continue;}
            if(i>=1){
                if(board[i-1][j] == 1) {danger++; continue;}
                if(j<n-1 && board[i-1][j+1] == 1) {danger++; continue;}
            }
            if(j>=1){
                if(board[i][j-1] == 1) {danger++; continue;}
                if(i<n-1 && board[i+1][j-1] == 1) {danger++; continue;}
            }
            if(i>=1 && j>=1){
                if( board[i-1][j-1] == 1) {danger++; continue;}
            }
            if(i<n-1) {
                if (board[i + 1][j] == 1) {danger++; continue;}
                if (j < n - 1 && board[i + 1][j + 1] == 1) {danger++; continue;}
            }
            if(j<n-1 && board[i][j+1] == 1) {danger++; continue;}
            }
        }
    answer = n*n - danger;
    return answer;
}

int main(){
    vector<vector<int>> board = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0},
                                 {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}};
    int result = solution(board);

    cout << result;
}