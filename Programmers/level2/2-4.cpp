// 최댓값과 최솟값
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int max_num = -2147483648, min_num = 2147483647;
    stringstream ss(s);
    string num;
    while (getline(ss, num, ' ')) {
        int tmp = stoi(num);
        max_num = max(max_num, tmp);
        min_num = min(min_num, tmp);
    }
    answer = to_string(min_num) + " " + to_string(max_num);
    return answer;
}