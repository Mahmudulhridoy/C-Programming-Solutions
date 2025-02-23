#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    int i, freq[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the elements of the array-%d: ", i + 1);
        scanf("%d", &array[i]);
        freq[i] = -1;
    }

    int count, j;
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])

            {
                count++;
                freq[j] = 0;
            }
        }

        freq[i] = count;
    }
    int max = 0;
    int a = -1;
    for (i = 0; i < n; i++)
    {

        if (freq[i] != 0)
        {
            if (freq[i] % 2 != 0)
            {
                if (freq[i] > max)
                {
                    max = freq[i];
                    a = array[i];
                }
            }
        }
    }
    if (a != -1)
    {
        printf("occuring odd elements number is: %d", a);
    }
    else
    {
        printf("No element with an odd frequency found.\n");
    }
}