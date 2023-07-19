// 이차원 배열 대각선 순회하기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    int row_count = board.size(); // 행 크기
    int col_count = board[0].size(); // 열 크기

    for(int i=0; i<row_count; i++)
        for(int j=0; j<col_count; j++){
            if(i+j<=k) answer += board[i][j];
        }

    return answer;
}

int main(){
    vector<vector<int>> board = {{0, 1, 2},{1, 2, 3},{2, 3, 4},{3, 4, 5}};
    int k = 2;
    int result = solution(board, k);

    cout << result;
}