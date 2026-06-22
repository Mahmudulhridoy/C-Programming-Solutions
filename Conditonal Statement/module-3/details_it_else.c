#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("You have got A+");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("You have got A grade");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("You have got A- grade");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("You have got B grade");
    }
    else if (marks >= marks && marks < 50)
    {
        printf("You have got  C rade");
    }
    else if (marks >= 33 && marks < 40)
    {
        printf("You have got  D grade");
    }
    else if (marks <= 0 && marks < 33)

    {
        printf("You have got F grade");
    }
    else
    {
        printf("please input the valid input within 1 to 100");
    }
}
