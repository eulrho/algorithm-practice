// 오늘 날짜
// 서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.
#include <iostream>
#include <ctime>
using namespace std;

// struct tm{
//     int tm_year;
//     int tm_mon;
//     int tm_mday;
// }

int main(){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    
    printf("%04d-%02d-%02d", t->tm_year + 1900, t->tm_mon+1, t->tm_mday);

    return 0;
}