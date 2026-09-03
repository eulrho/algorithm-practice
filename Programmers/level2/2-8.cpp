// 숫자의 표현
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1, left = 1, right = 1;
    int sum = 0;
    while (right < n) {
        while (right < n && sum < n) {
            sum += right;
            right++;
        }
        if (sum == n) answer++;
        sum -= left; left++; 
    }
    return answer;
}