#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int i, j;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)

        {
            printf("%d x %d= %d\n", i, j, j * i);
        }
        printf("\n\n");
    }
    return 0;
}