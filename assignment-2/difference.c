#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int max, min;
    int diff;
    if (a > b)
    {
        max = a;
        min = b;
        diff = max - min;
        printf("%d", diff);
    }
    else
    {
        max = b;
        min = a;
        diff = max - min;

        printf("%d", diff);
        
    }
}