#include <stdio.h>
int main()
{
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m >= -100 && m <= 100 && n >= -100 && n <= 100)
        {
            if (m <= 0 || n <= 0)
            {
                break;
            }
            if (n > m)
            {
                int temp = n;
                n = m;
                m = temp;
            }

            int i;
            int sum = 0;

            for (i = n; i <= m; i++)
            {
                printf("%d ", i); // need to find number between m to n
                sum = sum + i;
            }

            printf("sum =%d\n", sum);
        }
    }
}