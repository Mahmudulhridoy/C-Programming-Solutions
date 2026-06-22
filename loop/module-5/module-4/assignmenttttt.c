#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    scanf("%d", &N);
    if (N >= 1 && N <= 5000)
    {
        for (i = 1; i <= N; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                printf("%d Yes\n", i);
            }
            else
            {
                printf("%d No\n", i);
            }
        }
    }
    else
    {
        printf("invalid input. please give the valid input within the constraints");
    }

    return 0;
}
