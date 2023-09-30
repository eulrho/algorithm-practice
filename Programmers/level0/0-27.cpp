// 다항식 더하기
#include <iostream>
#include <string>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int x = 0, num = 0, len = 0;

    for(int i = 0; i < polynomial.size(); i++)
    {
        if (polynomial[i] == 'x')
        {
            if (len == 0)
                x += 1;
            else
                x += stoi(polynomial.substr(i - len, len));
        }
        else if (polynomial[i] >= '0' && polynomial[i] <= '9')
            len++;
        else if (polynomial[i] == ' ')
        {
            if (polynomial[i - 1] >= '0' && polynomial[i - 1] <= '9')
                num += stoi(polynomial.substr(i - len, len));
            len = 0;
        }
        if (i == polynomial.size() - 1)
        {
            if (polynomial[i] >= '0' && polynomial[i] <= '9')
                num += stoi(polynomial.substr(i - len + 1, len));
        }
    }
    if (x != 0)
    {
        if (x != 1)
            answer += to_string(x);
        answer += 'x';
        if (num != 0)
        {
            answer += " + ";
            answer += to_string(num);
        }
    }
    else
        answer += to_string(num);
    return answer;
}

int main() {
    string polynomial = "x + 1";
    string result = solution(polynomial);

    cout << result;
    return (0);
}