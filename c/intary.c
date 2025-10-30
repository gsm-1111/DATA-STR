// int[5]형 배열(자료형이 int형이고 요소가 5개)에 값을 입력해 출력
#include <stdio.h>

// #define N 5                      // 배열의 요소 개수
int main()
{
    int foo[3];                     // 배열의 선언
    for (int i = 0; i < 3; i++) {   // 각 요소에 값을 입력
        printf("foo[%d] : ", i);
        scanf("&d", &foo[i]);
    }
    puts("각 요소의 값");
    for (int i =0; i < 3; i++) {    // 각 요소의 값을 출력
        printf("foo[%d] = %d\n", i, foo[i]);
    }

    return 0;
}