#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    if (n < 0 || n > 1000000)
    {
        return 1;
    }
    int years, months, days;
    years = n / 365;
    months = (n % 365) / 30;
    days = (n % 365) % 30;

    printf("%d years\n%d months\n%d days", years, months, days);
}