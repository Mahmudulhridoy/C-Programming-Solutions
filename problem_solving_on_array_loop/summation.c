#include <stdio.h>
#include<stdib.h>

int main()
{

    int N;

    scanf("%d", &N);
    long long sum = 0;

    if (N >= 1 && N <= 100000)
    {

        long long A[N];
        int i;
        for (i = 0; i < N; i++)
        {

            scanf("%lld", &A[i]);
            if (A[i] <= -1000000000LL || A[i] >= 1000000000LL)
            {
                return 1;
            }

            sum += A[i];
        }

        printf("%lld\n", llabs(sum));
    }
}
