#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);
    int X, i;
    int A[N];

    if (N >= 1 && N <= 100000)
    {

        for (i = 0; i < N; i++)
        {

            scanf("%d", &A[i]);
            if (A[i] < 0 || A[i] >= 1000000000LL)
            {
                return 1;
            }
        }
    }
    scanf("%d", &X);
    int found = 0;
    if (X >= 0 && X <= 1000000000)
    {

        for (i = 0; i < N; i++)
        {
            if (A[i] == X)
            {
                found = 1;
                printf("%d\n", i);
                break;
            }
        }
        if (!found)
        {
            printf("-1\n");
        }
    }
}
