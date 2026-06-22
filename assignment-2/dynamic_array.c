#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int *arr = malloc(N * sizeof(int));
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}