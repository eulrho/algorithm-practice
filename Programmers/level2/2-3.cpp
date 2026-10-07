// 올바른 괄호
#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool is_valid_str(string &s) {
    stack<char> st;
    for (auto ch : s) {
        if (ch == '(') st.push('(');
        else if (st.empty()) return false;
        else st.pop();
    }
    return st.empty();
}

bool solution(string s)
{
    bool answer = is_valid_str(s);
    return answer;
}