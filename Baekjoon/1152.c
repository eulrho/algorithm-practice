// 단어의 개수
// 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000000];
    int count = 0, i = 0;
    // 공백 포함 문자열 입력
    scanf("%[^\n]s", a);

    // " " 사용 시 error
    if (strlen(a)==1 && a[i] == ' '){
        printf("0");
        return 0;
    }

    if (a[i] == ' ') i++;
    for (i; i < strlen(a)-1; i++) {
        if (a[i] == ' ') count++;
    }
    printf("%d", count+1);
    return 0;
}