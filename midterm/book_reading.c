#include <stdio.h>
int main()
{
    int N;
    long long T;
    printf("enter the value of N and T: ");
    scanf("%d %lld", &N, &T);

    long long b[N];
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &b[i]);
    }

    long long sum = 0;
    int count = 0;

    for (i = 0; i < N; i++)
    {
        if (sum + b[i] <= T)
        {
            sum = sum + b[i];
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", count);
}