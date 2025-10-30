#include <stdio.h>

int main(void)
{
    printf("----- °ö¼ÀÇ¥ -----\n");

    for (int i =1; i <=9; i++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%d X %d = %3d", i, j, i * j);
        putchar('\n');
    }

    return 0;
}