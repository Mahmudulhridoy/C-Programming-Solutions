#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int M;
    scanf("%d", &M);
    if (M >= 1 && M <= 5000)
    {
        if (M >= 1000)
        {
            printf("Three Kacchi\n");
        }
        else if (M >= 500)
        {
            printf("One Large Pizza\n");
        }
        else if (M >= 250)
        {
            printf("Three Small Burger\n");
        }
        else if (M >= 100)
        {
            printf("Three Fuchka\n");
        }
        else
        {
            printf("Nothing\n");
        }
    }

    return 0;
}
