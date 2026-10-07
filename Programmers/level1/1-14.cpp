// 숫자 짝꿍
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int num[10][3] = {0};
    for (int i=0; i<(int)X.size(); i++) num[X[i] - '0'][0]++;
    for (int i=0; i<(int)Y.size(); i++) num[Y[i] - '0'][1]++;
    for (int i=0; i<10; i++) num[i][2] = min(num[i][0], num[i][1]);
    
    for (int i=9; i>=0; i--) {
        for (int j=0; j<num[i][2]; j++) answer += i + '0';
    }
    if (answer.empty()) answer = "-1";
    else if (answer.size() >= 2 && answer[0] == '0') answer = "0";
    return answer;
}