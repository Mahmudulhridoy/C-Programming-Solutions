#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of squre matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements at [%d][%d]: ", i, j);

            scanf("%d", &matrix[i][j]);
        }
    }

    int result = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))

            {
                result = 1;
                break;
            }
        }
    }
    if (result == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("No");
    }
}