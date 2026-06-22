#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    int min = a[0]; // INT_MAX;
    int max = a[0]; // INT_MIN;
    for (i = 0; i < n; i++)

    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }

        if (a[i] > max)
        {
            max = a[i];
        }

        // printf("min: %d max: %d\n", min, max);
    }
    printf("minimum: %d maximum: %d\n", min, max);
}