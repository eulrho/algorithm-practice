// 연속된 수의 합
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int temp = num, standard = (int)(total/num);
    if(num % 2 == 1) { standard--; temp--; }    // total-=standard
    /*
     * sum = total/(temp/2), total/sum = temp/2
     */
    int start = standard - temp/2 + 1;
    for(int i = 0; i<num; i++){
        answer.push_back(start++);
    }
    return answer;
}

int main(){
    int num = 3, total = 0;
    vector<int> result = solution(num, total);
    for(auto r : result){
        cout << r << ' ';
    }
    return 0;
}
