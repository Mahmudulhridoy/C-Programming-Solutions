#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int i, j;

    for (i = 1; i <= N; i++)
    {

        /*for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }*/
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = N - 1; i >= 1; i--)
    {

        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}