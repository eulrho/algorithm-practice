// 이상한 곱셈
#include <iostream>

using namespace std;

int main(){
    long long ans;
    string a, b;
    
    cin >> a >> b;
    
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < b.size(); j++)
            ans += (a[i] - '0') * (b[j] - '0');
    
    cout << ans <<'\n';
}