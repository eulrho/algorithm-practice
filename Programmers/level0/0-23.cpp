// 다음에 올 숫자
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int geometric, arithmetic;
    geometric = common[1] / common[0];
    arithmetic = common[1] - common[0];
    if (common[2] - common[1] == arithmetic)
        answer = common.back() + arithmetic;
    else
        answer = common.back() * geometric;
    return answer;
}

int main() {
    vector<int> common = {198, 200, 202};
    int result = solution(common);
    cout << result;
}