#include <stdio.h>
int main()
{
    int n, r;
    printf("enter the size of first array element: ");
    scanf("%d", &n);
    printf("enter the size of second array elements: ");
    scanf("%d", &r);
    int array1[n];
    int array2[r];
    int m = r + n;
    int array3[m];
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        printf("the 1st sorted array element- %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("\n\n");
    for (i = 0; i < r; i++)
    {

        printf("the 2nd sorted array element- %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    for (i = 0, j = 0; i < n; i++, j++)
    {
        array3[j] = array1[i];
    }
    for (i = 0; i < r; i++, j++)
    {
        array3[j] = array2[i];
    }

    /*for (i = 0; i < 2 * n; i++)
    {
        printf("%d", array3[i]);
    }*/

    for (i = 0; i < m - 1; i++) 
    {
        for (j = i + 1; j < m; j++) 
        {
            if (array3[i] > array3[j])
            {
                temp = array3[i];
                array3[i] = array3[j]; // ascending r desecending e condition change
                array3[j] = temp;
            }
        }
    }
    printf("\n\n");
    printf("Merged array in ascending order:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", array3[i]);
    }
    printf("\n");
}
