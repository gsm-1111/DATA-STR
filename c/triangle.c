#include <stdio.h>

int main(void)
{
    int n;

    printf("몇 단 삼각형입니까?: ");
    scanf("%d", &n);

    //이등변 삼각형
    for (int i =1; i <= n; i++)
    {
        for (int j =1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    // 삼각형
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
            putchar(' ');
        for (int j = 0; j < 2*i+1; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}