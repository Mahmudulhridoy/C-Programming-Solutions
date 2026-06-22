#include <stdio.h>
int main()
{

    /* int x;
     scanf("%d", &x);

     int i;
     for (i = 1; i <= x; i++)
     {

         if (i > 5)
         {

             break;
         }
         printf("%d\n", i);
     }*/
    /*int i;
    for (i = 0; i <= 10; i++)
    {
        printf("hi ");
        if (i > 2)
        {
            break;
        }
    }*/

    /* int i;
     for (i = 100; i <= 300; i++)
     {
         printf("checking %d\n", i);

         if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
         {
             printf("%d is the  number\n", i);

             break;
         }
     }*/

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        printf("\n%d.\n", i);
        for (j = 1; j <= 7; j++)
        {
            printf("%d.inside loop\n", j);
            if (j == 4)
            {
                break;
            }
        }
        if (i == 3)
        {
            break;
        }
    }
}
