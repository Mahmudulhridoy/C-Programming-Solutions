#include <stdio.h>
int main()
{
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (n > m)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        if (m > 0 && n > 0)
        {
            int i;
            int sum = 0;

            for (i = n; i <= m; i++)
            {
                sum = sum + i;
                printf("%d ", i);
            }
            // need to find number between m to n
            printf("sum =%d\n", sum);
        }

        else
        {
            return 1;
        }
    }
    return 0;
}