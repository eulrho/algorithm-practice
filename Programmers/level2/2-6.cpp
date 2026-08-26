// JadenCase 문자열 만들기
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = s;
    int size = (int)answer.size(), idx = 0;
    while (idx < size) {
        while (idx < size && answer[idx] == ' ') idx++;
        answer[idx] = toupper(answer[idx]);
        while (++idx < size && answer[idx] != ' ') answer[idx] = tolower(answer[idx]);
    }
    return answer;
}