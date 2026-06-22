#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, found = 0;

    if (N >= 1 && N <= 1000)
    {

        for (i = 2; i <= N; i += 2)
        {
            printf("%d\n", i);
            found = 1;
        }
        if (!found)
        {
            printf("-1\n");
        }
    }
    else
    {
        return 1;
    }
}