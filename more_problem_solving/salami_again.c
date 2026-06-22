#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int array[N];
    int max, i;
    long long b = 1000000000;
    int difference;
    scanf("%d", &difference);

    if (N >= 1 && N <= 100000)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &array[N]);
            if (array[i] < 0 || array[i] > b)
            {
                return 1;
            }
        }

        max = array[0];
        for (i = 0; i < N; i++)
        {

            if (array[i] > max)
            {
                max = array[i];
            }
        }

        for (i = 0; i < N; i++)
        {
            difference = max - array[i];
            print("%d ", difference);
        }
        printf("\n");
    }
    else
    {
        return 1;
    }
}