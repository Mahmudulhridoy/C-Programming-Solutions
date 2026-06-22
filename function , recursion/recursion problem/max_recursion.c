#include <stdio.h>
int max(int *a, int index, int t)
{

    if (index == t - 1)
    {
        return a[index];
    }

    int maxin = max(a, index + 1, t);

    if (a[index] > maxin)
    {
        return a[index];
    }
    else
    {
        return maxin;
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int i, array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    printf("%d", max(array, 0, n));
}