#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int M;
    scanf("%d", &M);
    if (M >= 1 && M <= 1000)
    {
        if (M % 3 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("invalid input. please give the number within the constraints");
    }

    return 0;
}
