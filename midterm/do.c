#include <stdio.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    if (N < 1 || N > 100 || K < 1 || K > 100)
    {
        return 1;
    }

    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= K; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}