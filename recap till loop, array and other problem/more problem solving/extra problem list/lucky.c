#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0;
    int i;
    if (a >= 1 && b <= 100000 && a <= b)
    {
        for (i = a; i <= b; i++)
        {
            int n = i, number = 1;
            while (n > 0)
            {
                int digit = n % 10;
                if (digit != 4 && digit != 7)
                {
                    number = 0;
                    break;
                }
                n /= 10;
            }
            if (number)
            {

                printf("%d ", i);
                found = 1;
            }
        }
        if (found == 0)
        {
            printf("-1");
        }
    }
    printf("\n");
}