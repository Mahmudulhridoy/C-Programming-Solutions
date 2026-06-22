#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);

    int i;
    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        long long factorial = 1;
        int j;
        for (j = 1; j <= n; j++)
        {

            factorial *= j;
        }
        printf("%lld\n", factorial);
    }
}
