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
    int j;
    for (i = 0; i < n; i++)
    {
        int is_unique = 1;
        for (j = 0; j < n; j++)

        {
            if (i != j && array[i] == array[j])
            {

                is_unique = 0;
                break;
            }
        }
        if (is_unique)
        {
            printf("unique elements of array: %d\n", array[i]);
        }
    }
}
