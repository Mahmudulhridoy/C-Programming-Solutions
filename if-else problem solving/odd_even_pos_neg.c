#include <stdio.h>
int main()
{
    int n;
    printf("please enter a number:");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("positve number\n");
        if (n % 2 == 0)
        {
            printf("even number\n");
        }
        else
        {
            printf("odd number\n");
        }
    }
    else
    {
        printf("negative number\n");
        if (n % 2 == 0)
        {
            printf("even number\n");
        }
        else
        {
            printf("odd number");
        }
    }
}