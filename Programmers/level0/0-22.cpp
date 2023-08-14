// 분수의 덧셈
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer3 = numer1*denom2+numer2*denom1, denom3 = denom1*denom2;
    int standard = (numer3 < denom3)? numer3:denom3, div;
    for(int i=1; i<=standard; i++){
        if(numer3 % i == 0 && denom3 % i == 0) div = i;
    }
    answer.push_back(numer3/div); answer.push_back(denom3/div);
    return answer;
}

int main(){
    int numer1 = 1, denom1 = 2, numer2 = 1, denom2 = 2;
    vector<int> result = solution(numer1, denom1, numer2, denom2);
    for(auto r : result){
        cout << r << " ";
    }
    return 0;
}