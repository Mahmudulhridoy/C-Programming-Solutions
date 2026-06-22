#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int i, a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (i = 0; i < n; i++)

    {
        sum += a[i];
    }

    printf("%d\n", sum);

    double average;
    average = (double)sum / n;
    printf("%.2lf", average);
}