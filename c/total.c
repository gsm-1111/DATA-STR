#include<stdio.h>

int main(void)
{
    int n;

    puts("1���� n������ ������ ���մϴ�.");

    printf("n��: ");
    scanf("%d", &n);

    int sum = 0; // ����
    int i = 1;
    int sum2 = 0;
    int sum3 = 0;

    while (i <= n)
    {               // i�� n �����̸� �ݺ�
        sum += i;   // sum�� i�� �߰�
        i++;        // i���� 1����
    }

    for (int j = 1; j <= n; j++)
    {
        sum2 += j;
    }

    // ���콺�� ���� �˰���
    sum3 = n * (n + 1) / 2;
    printf("���콺�� ���� �˰������� ���� 1���� %d������ ������ %d�Դϴ�.\n", n, sum3);
    
    printf("while-1���� %d������ ������ %d�Դϴ�.\n", n, sum);
    printf("for-1���� %d������ ������ %d�Դϴ�.\n", n, sum2);

    return 0;
}