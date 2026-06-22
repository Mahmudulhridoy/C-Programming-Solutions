#include <stdio.h>
int main()
{

    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter the elements-%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int j, count, found = -1;
    for (i = 0; i < n; i++)
    {
        count = 1;

        // if (found != array[i])

        for (j = i + 1; j < n; j++)
        {

            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            found = array[i];
            printf("majority elelments is exists which is-%d\n", array[i]);

            break;
        }
    }
    if (found == -1)
    {
        printf("majority elements is not existed");
    }
    return 0;
}