// int형 배열을 초기화하고 출력
#include <stdio.h>

int main(void)
{
    int foo[5] = {1, 2, 3, 4, 5};
    int fooSize = sizeof(foo) / sizeof(foo[0]); // 요소의 개수
    printf("배열 a의 요소 개수는 %d입니다.\n", fooSize);

    for (int i = 0; i < fooSize; i++)
        printf("foo[%d] = %d\n", i, foo[i]);
        
        
    return 0;
}