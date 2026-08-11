// 정수를 나선형으로 배치하기
#include <iostream>
#include <vector>
using namespace std;

int diff_y[] = {0, 1, 0, -1};
int diff_x[] = {1, 0, -1, 0};

bool is_valid_range(int num) {
    return (num == 0);
}

bool is_valid_idx(int n, int idx) {
    return (idx >= 0 && idx < n);
}

bool check_range(int n, vector<vector<int>> &res, int diff, int y, int x) {
    int new_y = y + diff_y[diff];
    int new_x = x + diff_x[diff];
    return (is_valid_idx(n, new_y) && is_valid_idx(n, new_x)
        && is_valid_range(res[new_y][new_x]));
}

vector<vector<int>> fill_array(int n) {
    vector<vector<int>> res(n, vector<int>(n, 0));
    
    int y=0, x=0, num=1, cnt = n * n;
    int diff = 0;
    
    while (cnt-- != 0) {
        res[y][x] = num++;
        if (!check_range(n, res, diff, y, x))
            diff = diff + 1 == 4 ? 0 : diff + 1;
        y += diff_y[diff];
        x += diff_x[diff];
    }
    return res;
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer = fill_array(n);
    return answer;
}