#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    if (n < 1 || n > 1000)
    {
        return 1;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < 0 || array[i] > 1000000000)
        {
            return 1;
        }
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}