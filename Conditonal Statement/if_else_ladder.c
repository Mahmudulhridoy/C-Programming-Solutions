// executing multiple conditional statement
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a < 5)
    {
        printf("a is less than 5\n");
    }
    else if (a < 15)
    {
        printf("a is less than 15\n");
    }
    else if (a < 20)
    {
        printf("a is less than 20\n");
    }
    else
    {
        printf("a is less than 100\n");
    }
    printf("after if ladder");
}