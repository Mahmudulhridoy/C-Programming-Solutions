#include <stdio.h>
int main()
{

    int n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    int array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter the elements of the array-%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int smallest, second;
    smallest = array[0];
    
    second = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] < smallest)
        {
            second = smallest;
            smallest = array[i];
        }
        else if (array[i] < second && array[i] != smallest)
        {
            second = array[i];
        }
    }

    printf("second smallest element: %d", second);
}