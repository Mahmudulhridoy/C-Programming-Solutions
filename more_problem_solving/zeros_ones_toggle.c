#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    int i;

        if (N >= 1 && N <= 100000)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] != 0 && array[i] != 1)
            {
                return 1;
            }
        }
        int X;
        scanf("%d", &X);

        if (X < 1 || X > 100000)
        {
            return 1;
        }

        if (array[X - 1] == 0)
        {
            array[X - 1] = 1;
        }
        else if (array[X - 1] == 1)
        {
            array[X - 1] = 0;
        }

        for (i = 0; i < N; i++)
        {

            printf("%d ", array[i]);
        }
        printf("\n");
    }
}
