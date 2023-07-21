// 겹치는 선분의 길이
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> coordinate(vector<vector<int>> lines, int num1, int num2){
    int start, end; vector<int> dot;
    start = (lines[num1][0] >= lines[num2][0]) ? lines[num1][0] : lines[num2][0];
    end = (lines[num1][1] <= lines[num2][1]) ? lines[num1][1] : lines[num2][1];
    if(start < end) {
        dot.push_back(start); dot.push_back(end);
    }

    return dot;
}

int case1_distance(vector<vector<int>> dots){
    int start = dots[0][0], end = dots[0][1];
    for(int i=1; i<dots.size(); i++){
        start = (start > dots[i][0]) ? dots[i][0] : start;
        end = (end < dots[i][1]) ? dots[i][1] : end;
    }

    return abs(start-end);
}

int case2_distance(vector<vector<int>> dots){
    int result=0;
    for(int i=0; i<dots.size(); i++){
        result += abs(dots[i][0] - dots[i][1]);
    }

    return result;
}

int solution(vector<vector<int>> lines) {
    int answer;
    vector<vector<int>> dots;

    if(coordinate(lines, 0, 1).size() != 0) dots.push_back(coordinate(lines, 0, 1));
    if(coordinate(lines, 0, 2).size() != 0) dots.push_back(coordinate(lines, 0, 2));
    if(coordinate(lines, 1, 2).size() != 0)dots.push_back(coordinate(lines, 1, 2));

    if (dots.size() == 3) {
        answer = case1_distance(dots);
    }
    else {
        answer = case2_distance(dots);
    }

    return answer;
}

int main(){
    vector<vector<int>> lines = {{0, 5}, {3, 9}, {1, 10}};
    int result = solution(lines);

    cout << result;
    return 0;
}