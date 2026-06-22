#include <stdio.h>
void max(int *a, int t)
{
    int i, max = a[0], min = a[0];
    for (i = 0; i < t; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{

    int n;
    scanf("%d", &n);
    int array[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    max(array, n);
}