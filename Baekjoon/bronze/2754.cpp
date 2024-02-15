// 학점계산
#include <iostream>
using namespace std;

int main() {
    string score;
    cin >> score;
    if (score == "A+") printf("%.1f", 4.3);
    else if (score == "A0") printf("%.1f", 4.0);
    else if (score == "A-") printf("%.1f", 3.7);
    else if (score == "B+") printf("%.1f", 3.3);
    else if (score == "B0") printf("%.1f", 3.0);
    else if (score == "B-") printf("%.1f", 2.7);
    else if (score == "C+") printf("%.1f", 2.3);
    else if (score == "C0") printf("%.1f", 2.0);
    else if (score == "C-") printf("%.1f", 1.7); 
    else if (score == "D+") printf("%.1f", 1.3);
    else if (score == "D0") printf("%.1f", 1.0);
    else if (score == "D-") printf("%.1f", 0.7);
    else if (score == "F") printf("%.1f", 0.0);

    return 0;
}