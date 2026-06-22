#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);
    int i;
    int A[N];

    if (N >= 2 && N <= 1000)
    {

        for (i = 0; i < N; i++)
        {

            scanf("%d", &A[i]);
            if (A[i] < -100000 || A[i] >= 100000)
            {
                return 1;
            }
        }

        for (i = 0; i < N; i++)
        {
            if (A[i] <= 10)
            {
                printf("A[%d] = %d\n", i, A[i]);
            }
        }
    }
}