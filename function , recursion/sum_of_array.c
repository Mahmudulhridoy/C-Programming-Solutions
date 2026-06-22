#include <stdio.h>
int array[1000];
int getSUM(int array[], int i, int n)
{

    if (i == n)
    {
        return 0;
    }
    return array[i] + getSUM(array, i + 1, n);
}

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("enter elements of array\n");
    int array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter elements in index-%d: ", i + 1);
        scanf("%d", &array[i]);
        // printf("\n");
    }

    printf("sum of array elements: %d", getSUM(array, 0, n));
}