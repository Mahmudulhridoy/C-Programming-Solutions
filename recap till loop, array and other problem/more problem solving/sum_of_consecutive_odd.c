#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    int sum;

    if (t >= 1 && t <= 10)
    {
        int cs;

        for (cs = 0; cs < t; cs++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x < 0 || x > 10000 || y < 0 || y > 10000)
            {
                return 1;
            }

            if (x > y)
            {

                int temp = x;
                x = y;
                y = temp;
            }
            int sum = 0;
            int i;

            for (i = x + 1; i < y; i++)
            {

                if (i % 2 != 0)
                {
                    sum += i;
                }
            }

            printf("%d\n", sum);
        }
    }
    return 0;
}