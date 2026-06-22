#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);
    int i;
    while (T--)
    {
        scanf("%d", &N);

        for (i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }

        for (i = N - 1; i >= 1; i--)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
