#include <stdio.h>
int main()
{

    int n = 10;
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        printf("%d +%d=", sum, i);

        sum = sum + i;
        printf("%d\n", sum);
    }
}