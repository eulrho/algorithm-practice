// 후위표기법1
#include <iostream>
#include <stack>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int pop_num(stack<int>& st) {
    int res = st.top();
    st.pop();
    return res;
}

int main()
{
    fast;
    int m; cin >> m;
    stack<int> st;
    string n;
    for (int i=0; i<m; i++) {
        cin >> n;
        if (n >= "0" && n <= "9") st.push(stoi(n));
        else {
            int b = pop_num(st);
            int a = pop_num(st);
            if (n == "+") st.push(a + b);
            else if (n == "/") st.push(a / b);
            else if (n == "*") st.push(a * b);
            else st.push(a - b);
        }
    }
    cout << st.top();
    return 0;
}