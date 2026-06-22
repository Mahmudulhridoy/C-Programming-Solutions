#include <stdio.h>

int array[1000];
int b[1000];
int main()
{
    int n;
    scanf("%d", &n);

    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (i = 0, j = n - 1; i < n; i++, j--)

    {
        b[j] = array[i];
    }

    for (i = 0; i < n; i++)

    {
        array[i] = b[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}