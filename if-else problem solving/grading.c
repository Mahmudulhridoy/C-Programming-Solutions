#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks you have got:");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("you have passed\n");

        if (marks >= 80 && marks <= 100)
        {
            printf("You have got A+\n");
            if (marks >= 90 && marks <= 100)
            {
                printf("you have got scholarship, congratulation to you\n");
            }
        }
        else if (marks >= 70 && marks < 80)
        {
            printf("You have got A grade\n");
        }
        else if (marks >= 60 && marks < 70)
        {
            printf("You have got A- grade\n");
        }
        else if (marks >= 50 && marks < 60)
        {
            printf("You have got B grade\n");
        }
        else if (marks >= marks && marks < 50)
        {
            printf("You have got  C rade\n");
        }
        else if (marks >= 33 && marks < 40)
        {
            printf("You have got  D grade\n");
        }
    }
    else if (marks < 32 && marks >= 0)
    {

        printf("you have failed\n you have got F grade");
    }

    else
    {
        printf("please input the valid input within 1 to 100");
    }
}
