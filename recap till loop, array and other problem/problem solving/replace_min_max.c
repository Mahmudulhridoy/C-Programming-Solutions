

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
        min = array[0];
        max = array[0];

        for (i = 1; i < n; i++)
        {

            if (array[i] < min)
            {
                min = array[i];
                index1 = i;
            }
            if (array[i] > max)
            {

                max = array[i];
                index2 = i;
            }
        }
        int temp;
        temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;

        for (i = 0; i < n; i++)
        {
            if (array[i] == array[index1] || array[i] == array[index2])
            {

                printf("%d ", array[i]);
            }
            else
            {
                printf("%d ", array[i]);
            }
        }
    }

    return 0;
}
