// 두 정수 사이의 합
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long sum(int a, int b) {
    if (a == b) return a;
    
    long long tmp = abs(a - b) + 1;
    long long res = (a + b) * (tmp / 2);
    if (tmp % 2 != 0) res += (a + b) / 2;
    return res;
}

long long solution(int a, int b) {
    long long answer = sum(a, b);
    return answer;
}