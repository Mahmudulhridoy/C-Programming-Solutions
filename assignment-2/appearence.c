#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int array[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int unique, count = 0;
    for (i = 0; i < n; i++)
    {
        unique = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j && array[i] == array[j])
            {
                unique = 0;
                break;
            }
        }
        if (unique)
        {
            count++;
        }
    }
    printf("%d", count);
}