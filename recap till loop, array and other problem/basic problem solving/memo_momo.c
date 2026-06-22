#include <stdio.h>
int main()
{

    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    long long c = 1000000000000000000LL;
    if (a >= 1 && a <= c && b >= 1 && b <= c && k >= 1 && k <= c)
    {
        if (a % k == 0 && b % k == 0)
        {
            printf("Both\n");
        }
        else if (a % k == 0 && b % k != 0)
        {
            printf("Memo\n");
        }
        else if (b % k == 0 && a % k != 0)
        {
            printf("Momo\n");
        }
        else if (b % k != 0 && a % k != 0)
        {
            printf("No One\n");
        }
    }
    else
    {
        return 1;
    }
}