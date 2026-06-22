#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool result;
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if (A >= -100 && A <= 100)

    {
        if (B >= -100 && B <= 100)
        {
            if (S == '<')
            {
                result = (A < B);
            }
            else if (S == '>')
            {
                result = (A > B);
            }
            else if (S == '=')
            {
                result = (A == B);
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
        if (result)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {
        return 1;
    }
}
