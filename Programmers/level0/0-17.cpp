// 평행
#include <iostream>
#include <vector>

using namespace std;

double slope(vector<vector<int>> dots, int n1, int n2){
    return (double)(dots[n1][1] - dots[n2][1])/(dots[n1][0] - dots[n2][0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    bool success = false;

    if(slope(dots, 0, 1) == slope(dots, 2, 3)) success = true;
    if(slope(dots, 0, 2) == slope(dots, 1, 3)) success = true;
    if(slope(dots, 0, 3) == slope(dots, 1, 2)) success = true;

    if (success == true) answer = 1;

    return answer;
}

int main(){
    vector<vector<int>> dots = {{1, 4}, {9, 2}, {3, 8}, {11, 6}};
    int result = solution(dots);

    cout << result;
    return 0;
}