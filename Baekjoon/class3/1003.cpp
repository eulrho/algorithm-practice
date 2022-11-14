// 피보나치 함수
#include <iostream>
#include <vector>
#define MAX 41
using namespace std;

void fibonacci(vector<int>&cache, int n){
    fill(cache.begin(), cache.end(), 0);
    cache[n]=1;

    for(int i=2; i<MAX; i++){
        cache[i] = cache[i-1] + cache[i-2];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n; cin >> t;
    vector<int>cache_zero(MAX); fibonacci(cache_zero, 0);
    vector<int>cache_one(MAX); fibonacci(cache_one, 1);
    
    for(int i=0; i<t; i++){
        cin >> n;
        cout << cache_zero[n] << " " << cache_one[n] << "\n";
    }

    return 0;
}
