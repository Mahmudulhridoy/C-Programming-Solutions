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

    printf("\n\n");
    int j, count = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
    }
    printf("duplicate total elements of array: %d", count);
}