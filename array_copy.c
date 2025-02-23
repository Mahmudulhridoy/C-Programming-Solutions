#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    int i;

    for (i = 0; i < n; i++)
    {

        printf("enter the elements-%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int array1[n];
    int j;
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        array1[i] = array[i];

        printf("new array elements-%d: %d\n", i + 1, array1[i]);
    }
}
