#include <stdio.h>
int main()
{
    int a, b = 0;
    int i, j, count = 0;

    for (i = 1; i <= 5; i++)
    {
        b = 1 + b;
        printf("%d. outer loop\n", b);
        for (j = 1; j <= 4; j++)
        {
            b++;
            // count++;
            a = b;
            printf("%d. inner loop\n", a);
        }
        printf("\n");
    }

    // printf("%d\n", count);
    return 0;
}

//