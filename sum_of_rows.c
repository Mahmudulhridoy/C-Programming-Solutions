#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns], i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the elements of the matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;

    for (i = 0; i < rows; i++)
    {
        sum = sum + matrix[i][0];
    }

    printf("%d", sum);
}
