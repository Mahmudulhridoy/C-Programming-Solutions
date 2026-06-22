#include <stdio.h>
int main()
{
    int N, last_digit, first_digit;
    scanf("%d", &N);
    first_digit = N / 10;
    last_digit = N % 10;

    if (N >= 10 && N <= 100)
    {

        if (last_digit % first_digit == 0 || first_digit % last_digit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}