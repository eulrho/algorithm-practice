// 옹알이 (1)
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(string s : babbling){
        while(1){
            if (s.size() == 0) {
                answer++;
                break;
            }
            if(s[0]=='a'){
                if(s.substr(0, 3)=="aya") {
                    s.erase(0,3);
                }
                else break;
            }
            else if (s[0]=='y'){
                if(s.substr(0,2)=="ye") {
                    s.erase(0,2);
                }
                else break;
            }
            else if (s[0]=='w'){
                if(s.substr(0,3)=="woo") {
                    s.erase(0,3);
                }
                else break;
            }
            else if (s[0]=='m'){
                if(s.substr(0,2)=="ma") {
                    s.erase(0,2);
                }
                else break;
            }
            else break;
        }
    }
    return answer;
}

int main() {
    vector<string> babbling = {"ayaye", "uuuma", "ye", "yemawoo", "ayaa"};
    int result = solution(babbling);

    cout << result;
}