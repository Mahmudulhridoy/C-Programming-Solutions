#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int i, max, min, index1 = 0, index2 = 0;
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

        int min = array[0];
        for (i = 1; i < n; i++)
        {
            if (array[i] < min)
            {
                min = array[i];
            }
        }
        int number = 0;

        for (i = 0; i < n; i++)
        {
            if (array[i] == min)
            {
                number += 1;
            }
        }

        if (number % 2 != 0)
        {
            printf("Lucky");
        }
        else
        {
            printf("Unlucky");
        }
    }
}