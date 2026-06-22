#include <stdio.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    long long sum;

    if (N >= 1 && N <= 1000000000)
    {
        sum = (N * (N + 1)) / 2;

        printf("%lld\n", sum);
    }
}