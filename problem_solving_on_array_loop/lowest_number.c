#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);
    int i, index;
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
        int min = A[0];
        index = 1;
        for (i = 0; i < N; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
                index = i + 1;
            }
        }

        printf("%d %d", min, index);
    }
}