// 배열 요소의 최대 값을 구하고 출력(요소 값 입력)
#include <stdio.h>
#include <stdlib.h>

/*--- 요소 개수가 n 인 배열 a의 요소의 최댓값 ---*/
int maxof(const int foo[], int elem_cnt) {
    int max = foo[0];             // 최댓값
    for (int i = 1; i < elem_cnt; i++) {
        if (foo[i] > max) max = foo[i];
    }
    return max;
}

int main(void)
{
    int number;                 // 인원 = 배열 height의 요소 개수
    printf("사람 수: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));  //요소 개수 number개인 배열을 생성
    printf("%d명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);                               // 배열 height를 해제

    return 0;
}