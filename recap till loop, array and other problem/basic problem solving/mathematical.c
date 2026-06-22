#include <stdio.h>
#include <stdbool.h>

int main()
{

    int A, B, C, result1;
    char Q, S;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    bool result;

    if (A >= 0 && A <= 100 && B >= 0 && B <= 100 && C >= -100000 && C <= 100000)
    {

        if (S == '+')
        {
            result = ((A + B) == C);
            result1 = (A + B);
        }
        else if (S == '-')
        {
            result = ((A - B) == C);
            result1 = (A - B);
        }
        else if (S == '*')
        {
            result = ((A * B) == C);
            result1 = (A * B);
        }
        else
        {
            return 1;
        }

        if (result)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d", result1);
        }
    }
    else
    {
        return 1;
    }
}