#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    if (n < 1 || n > 1000)
    {
        return 1;
    }

    long long array[n];

    int i, j;
    for (i = 0; i < n; i++)
    {

        scanf("%lld", &array[i]);
        if (array[i] < 0 || array[i] > 1000000000)
        {
            return 1;
        }
    }

    for (i = n - 1, j = 0; i >= 0 && j < n / 2; i--, j++)
    {

        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }

    for (j = 0; j < n; j++)
    {

        printf("%lld ", array[j]);
    }
    printf("\n");
    }