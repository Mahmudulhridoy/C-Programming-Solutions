#include <stdio.h>

int main()
{
    int a, ex;
    scanf("%d", &a);
    int i;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ex);

        if (ex < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (ex <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (ex <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (ex > 7)
        {
            printf("Senior candidate");
        }
    }
}
