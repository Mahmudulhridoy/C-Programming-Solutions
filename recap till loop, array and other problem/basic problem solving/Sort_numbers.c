#include <stdio.h>
int main()
{

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int min = A;
    if (A >= -1000000 && A <= 1000000 && B >= -1000000 && B <= 1000000 && C >= -1000000 && C <= 1000000)
    {
        if (min > B)
        {

            min = B;
        }
        if (min > C)
        {
            min = C;
        }

        if (min == A)
        {

            if (B < C)
            {
                printf("%d\n%d\n%d\n\n", A, B, C);
            }

            else
            {

                printf("%d\n%d\n%d\n\n", A, C, B);
            }
        }
        else if (min == B)
        {
            if (A < C)
            {

                printf("%d\n%d\n%d\n\n", B, A, C);
            }
            else
            {
                printf("%d\n%d\n%d\n\n", B, C, A);
            }
        }
        else if (min == C)
        {
            if (A < B)
            {
                printf("%d\n%d\n%d\n\n", C, A, B);
            }
            else
            {
                printf("%d\n%d\n%d\n\n", C, B, A);
            }
        }
    }
    printf("%d\n%d\n%d\n", A, B, C);
}
