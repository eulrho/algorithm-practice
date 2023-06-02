// 문자열 겹쳐쓰기
#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int length = s+overwrite_string.size();

    // substr() => slice
    answer = my_string.substr(0, s) + overwrite_string;
    if (length < my_string.size())
        answer += my_string.substr(length);

    return answer;
}

int main(){
    string my_string = "He11oWor1d";
    string overwrite_string = "lloWorl";
    int s = 2;

    cout << solution(my_string, overwrite_string, s);

    return 0;
}