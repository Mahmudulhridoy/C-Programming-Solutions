#include <stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);

    int count = 0;
    int price[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &price[i]);
    }

    for (i = 0; i < a; i++)
    {
        if (price[i] >= b)
        {
            if (price[i] <= c)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}