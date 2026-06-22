#include <stdio.h>
int main()
{
    int n, i, even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {

            even_count++;
        }
        else
        {

            odd_count++;
        }
        if (x > 0)
        {
            positive_count++;
        }
        else if (x < 0)
        {
            negative_count++;
        }
    }
    printf("even: %d\n", even_count);
    printf("odd: %d\n", odd_count);
    printf("postive: %d\n", positive_count);
    printf("negative: %d\n", negative_count);
}