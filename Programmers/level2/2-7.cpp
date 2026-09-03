// 이진 변환 반복하기
#include <string>
#include <vector>

using namespace std;

string to_binary(int n) {
    string res = "";
    while (n) {
        res = to_string(n % 2) + res;
        n /= 2;
    }
    return res;
}

vector<int> cnv(string &s) {
    vector<int> res(2, 0);
    while (s != "1") {
        res[0]++;
        int len = 0;
        for (auto ch : s) {
            if (ch == '1') len++;
        }
        res[1] += (int)s.size() - len;
        s = to_binary(len);
    }
    return res;
}

vector<int> solution(string s) {
    vector<int> answer = cnv(s);
    return answer;
}