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
    int index;
    printf("enter the index which need to delete: ");
    scanf("%d", &index);

    for (i = index; i < n - 1; i++)
    {

        array[i] = array[i + 1];
    }
    n--;
    printf("new array is: ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", array[i]);
    }
}