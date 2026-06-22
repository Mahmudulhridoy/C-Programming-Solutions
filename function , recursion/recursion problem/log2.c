#include <stdio.h>

int log2floor(unsigned long long n)
{
    if (n == 1)
        return 0;
    return 1 + log2floor(n / 2);
}

int main()
{
    unsigned long long n;
    scanf("%llu", &n);
    printf("%d\n", log2floor(n));
}
