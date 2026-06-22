#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i;
    for (i = 0; i < t; i++)

    {
        int n;
        printf("actual digit is:");
        scanf("%d", &n);

        if (n == 0)
        {
            printf("%d\n", n);
        }
        printf("the reverse of the digit is:");
        while (n > 0)
        {
            int digit = n % 10;

            printf("%d", digit);
            n /= 10;
        }
        printf("\n");
    }
}