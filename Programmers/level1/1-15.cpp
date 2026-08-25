// 택배 상자 꺼내기
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int find_idx(int pos, int w, int target) {
    int tmp = target % w == 0 ? w : target % w;
    return pos % 2 == 0 ? (w + 1 - tmp) : tmp;
}

int solution(int n, int w, int num) {
    int answer = 0;
    int target_pos = (int)ceil((double)num / w);
    int last_num_pos = (int)ceil((double)n / w);
    int target_idx = find_idx(target_pos, w, num);
    int last_idx = find_idx(last_num_pos, w, n);
    
    answer = 1 + last_num_pos - target_pos;
    if ((last_num_pos % 2 == 0 && last_idx > target_idx)
    || (last_num_pos % 2 != 0 && last_idx < target_idx))
        answer--;
    return answer;
}