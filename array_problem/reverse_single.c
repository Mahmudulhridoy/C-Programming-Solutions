#include <stdio.h>
int a[10000];
int main()
{

    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    for (i = n - 1, j = 0; i >= 0 && j < n / 2; i--, j++)
    {
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    for (j = 0; j < n; j++)
    {

        printf("%d ", a[j]);
    }
    printf("\n");
}