// 등차수열의 특정한 항만 더하기
#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0, size = included.size();
    for(int i=0; i<size; i++){
        if(included[i]==true) answer += a+d*i;
    }
    return answer;
}

int main() {
    int a = 3, b = 4, result;
    vector<bool> included = {true, false, false, true, true};

    result = solution(a, b, included);
    cout << result;
}