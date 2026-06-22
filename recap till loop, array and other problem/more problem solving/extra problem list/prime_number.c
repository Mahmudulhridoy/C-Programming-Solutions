#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int i;

    if (x < 2 || x > 1000)
    {
        return 1;
    }
    for (i = 2; i <= x; i++)
    {
        int found = 0;
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("%d ", j);
        }
    }
}
