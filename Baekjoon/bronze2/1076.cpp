// 저항
#include <iostream>
#include <cmath>
using namespace std;

enum Color{
    BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE
};

int main() {

    string color; long long res; int colors[3];
    for(int i=0; i<3; i++){
        cin >> color;
        if(color=="black") colors[i] = BLACK;
        else if(color=="brown") colors[i] = BROWN;
        else if(color=="red") colors[i] = RED;
        else if(color=="orange") colors[i] = ORANGE;
        else if(color=="yellow") colors[i] = YELLOW;
        else if(color=="green") colors[i] = GREEN;
        else if(color=="blue") colors[i] = BLUE;
        else if(color=="violet") colors[i] = VIOLET;
        else if(color=="grey") colors[i] = GREY;
        else if(color=="white") colors[i] = WHITE;
    }

    res = (colors[0]*10+colors[1])*pow(10,colors[2]);
    cout << res;

    return 0;
}
