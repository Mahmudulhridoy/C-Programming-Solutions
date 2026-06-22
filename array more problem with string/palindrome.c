#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    if (n < 1 || n > 100000)
    {
        return 1;
    }

    long long array[n];

    int i, j;
    for (i = 0; i < n; i++)
    {

        scanf("%lld", &array[i]);
        if (array[i] < 0 || array[i] > 1000000000)
        {
            return 1;
        }
    }
    int p = 1;
    int a;
    for (i = n - 1; i >= 0; i--)
    {

        for (j = 0; j < n / 2; j++)
        {
            if (array[i] != array[j])
            {
                p = 0;
                break;
            }
        }
    }

    if (p == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
