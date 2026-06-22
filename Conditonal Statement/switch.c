#include <stdio.h>
int main()
{
    int day;
    printf("enter the day number:");
    scanf("%d", &day);

    /*if (day == 1)
    {
        printf("this is saturday");
    }
    else if (day == 2)
    {
        printf("this is  sunday");
    }
    else if (day == 3)
    {
        printf("this is monday");
    }
    else if (day == 4)
    {
        printf("this is tuesday");
    }
    else if (day == 5)
    {
        printf("this is wednesday");
    }
    else if (day == 6)
    {
        printf("this is thursday");
    }
    else if (day == 7)
    {
        printf("this is friday");
    }
    else
    {
        printf("please input the number within 1-7 days");
    */

    switch (day)
    {
    case 1:
        printf("this is saturday");
        break;
    case 2:
        printf("this is sunday");
        break;
    case 3:
        printf("this is monday");
        break;

    case 4:
        printf("this is tuesday");
        break;
    case 5:
        printf("this is wednesday");
        break;
    case 6:
        printf("this is thursday");
        break;
    case 7:
        printf("this is friday");
    default:
        printf("please input valild days number within 1-7 days");
    }
}
