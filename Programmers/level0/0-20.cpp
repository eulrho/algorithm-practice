// 주사위 게임 3
#include <iostream>
#include <cstdlib>

using namespace std;

int case1(int value[]){
    int p=6;
    for(int i=0; i<4; i++){
        if (value[i] < p) p = value[i];
    }

    return p;
}
int case2(int dice[]){
    int p=0, q=0, r=0;
    for(int i=1; i<7; i++){
        if (dice[i] == 2 && p == 0) p = i;
        else if (dice[i] != 0 && q == 0) q = i;
        else if (dice[i] != 0 && r == 0) r = i;
    }

    if(r == 0) return (p+q)*abs(p-q);
    else return q*r;
}
int case3(int dice[]){
    int p, q;
    for(int i=1; i<7; i++){
        if (dice[i] == 3) p = i;
        else if (dice[i] == 1) q = i;
    }

    return (10*p+q)*(10*p+q);
}
int solution(int a, int b, int c, int d) {
    int answer = 0, count = 0;
    int dice[7] = {0,};
    int value[4] = {a, b, c, d};
    for(int i=0; i<4; i++){
        dice[value[i]]++;
        if(count < dice[value[i]]) count = dice[value[i]];
    }

    if (count == 1) answer = case1(value);
    else if (count == 2) answer = case2(dice);
    else if (count == 3) answer = case3(dice);
    else if (count == 4) answer = 1111*a;

    return answer;
}

int main() {
    int a = 6, b = 4, c = 2, d = 5;
    int result = solution(a, b, c, d);

    cout << result;
}