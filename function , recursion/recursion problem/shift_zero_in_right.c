#include <stdio.h>

void shift(int *a, int i)
{

    int k, j = 0;
    for (k = 0; k < i; k++)
    {
        if (a[k] != 0)
        {
            a[j++] = a[k];
        }
    }
    while (j < i)
    {
        a[j++] = 0;
    }

    for (k = 0; k < i; k++)
    {
        printf("%d ", a[k]);
    }
}
int main()
{

    int ts;
    scanf("%d", &ts);
    int i, array[ts];
    for (i = 0; i < ts; i++)
    {
        scanf("%d ", &array[i]);
    }

    shift(array, ts);
}