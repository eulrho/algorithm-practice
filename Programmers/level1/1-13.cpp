// 햄버거 만들기
#include <string>
#include <vector>

using namespace std;

bool check(vector<int>& space) {
    int size = (int)space.size();
    int tmp[] = {1, 2, 3, 1}, t_idx=0;
    for (int i=size-4; i<size; i++) {
        if (space[i] != tmp[t_idx++]) return false;
    }
    return true;
}

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> space;
    for (auto i : ingredient) {
        space.push_back(i);
        if (space.size() >= 4) {
            if (check(space)) {
                answer++;
                for (int i=0; i<4; i++) space.pop_back();
            }
        }
    }
    return answer;
}