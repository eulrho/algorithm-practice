// ox퀴즈
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool calculation(int x, int y, int z, char sign)
{
    switch (sign) {
        case '+':
            return (x + y == z);
        case '-':
            return (x - y == z);
    }
}

int check_negative(string str, int *idx)
{
    int minus = 1;
    int result = 0;

    if (str[*idx] == '-')
    {
        (*idx)++;
        minus = -1;
    }
    while (str[*idx] >= '0' && str[*idx] <= '9')
    {
        result = result * 10 + str[*idx] - '0';
        (*idx)++;
    }
    return (result * minus);
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int x, y, z, idx;
    char sign;

    for (auto q : quiz)
    {
        idx = 0;
        x = check_negative(q, &idx);
        idx++;
        sign = q[idx];
        idx += 2;
        y = check_negative(q, &idx);
        idx += 3;
        z = check_negative(q, &idx);
        if (calculation(x, y, z, sign))
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}

int main() {
    vector<string> quiz = {"19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2"};
    vector<string> result = solution(quiz);

    for (auto r : result)
        cout << r;
}