#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of square matrix: ");
    scanf("%d", &n);

    int i, j;
    int array1[n][n], array2[n][n], array3[n][n];
    printf("enter the first matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("enter the elements of matrix at [%d][%d]= ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("enter the second matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("enter the elements of matrix at [%d][%d]= ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    int k, sum;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {

                sum = sum + array1[i][k] * array2[k][j];
            }
            array3[i][j] = sum;
        }
    }
    printf("after multiplication: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
}