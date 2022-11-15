// Zadanie próbne
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str; cin >> str;
    int len = str.length();
    for(int i=len-1; i>=0; i--)
    {
        cout << str[i];
    }

    return 0;
}
