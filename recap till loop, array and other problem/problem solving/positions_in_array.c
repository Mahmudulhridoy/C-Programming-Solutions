#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int i;
    if (n >= 2 && n <= 1000)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] > 100000 || array[i] < -100000)
            {
                return 1;
            }
        }

        for (i = 0; i < n; i++)
        {
            if (array[i] <= 10)
            {
                printf("A[%d] = %d\n", i, array[i]);
            }
                }
    }
}