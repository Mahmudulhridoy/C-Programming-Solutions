#include <stdio.h>
int main()
{
    int r, c, x;
    scanf("%d %d %d", &r, &c, &x);

    int matrix[r][c];
    int i, j, k;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int value, count;
    for (k = 0; k < x; k++)
    {
        count = 0;
        scanf("%d", &value);

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (matrix[i][j] == value)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
}