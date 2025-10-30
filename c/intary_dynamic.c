// int형 배열을 동적으로 생성하고 해제
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int el_num;
    printf("요소 개수 : ");
    scanf("%d", &el_num);
    int* foo = calloc(el_num, sizeof(int));

    if (foo == NULL)
        puts("메모리 확보에 실패했습니다.");
    else {
        printf("초기화 상태 확인.\n");
        for (int i = 0; i < el_num; i++) {
            printf("foo[%d] = %d\n", i, foo[i]);
        }
        printf("%d개의 정수를 입력하세요. \n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("foo[%d] : ", i);
            scanf("%d", &foo[i]);
        }
        printf("각 요솟값은 아래와 같습니다.\n");
        for (int i = 0; i < el_num; i++)
            printf("foo[%d] = %d\n", i, foo[i]);
        free(foo);
    }

    return 0;
}