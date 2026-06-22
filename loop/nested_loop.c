#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++) // vertically
    {
        for (j = 1; j <= 5; j++) // horizontally
        {
            printf("%d hour, %d minute\n", i, j);
        }
        printf("\n");
    }
}