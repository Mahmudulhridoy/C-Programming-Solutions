#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a is the greatest");
            }
            else
            {
                printf("d is the greatest");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is the greatest");
            }
            else
            {
                printf("d is the greatest");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is the greatest");
            }
            else
            {
                printf("d is the greatest");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is the greatest");
            }
            else
            {
                printf("d is the greatest");
            }
        }
    }

    return 0;
}
