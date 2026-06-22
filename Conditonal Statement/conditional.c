#include <stdio.h>
int main()
{
    int a = 5;

    /* printf("before if\n");
     if (a == 7)
     {
         printf("inside if\n"); //not true won't print
     }
     printf("after if");*/
    if (a < 15)
    {
        a += 100;
        printf("hello hridoy\n");
    }
    printf("%d", a);
}