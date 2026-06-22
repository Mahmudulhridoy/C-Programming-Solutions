#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int array[N];

    int count_zero = 0;
    int count_one = 0;
    if (N >= 1 && N <= 100000)
    {
        int i;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] != 1 && array[i] != 0)
            {
                return 1;
            }
        }
        for (i = 0; i < N; i++)
        {

            if (array[i] == 1)
            {
                count_one += 1;
            }
            if (array[i] == 0)
            {
                count_zero += 1;
            }
        }
        printf("%d %d\n", count_zero, count_one);
    }
}