#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("array elements-%d", i + 1);
        scanf("%d", &array[i]);
    }

    int max_sum = array[0];
    int current_sum = array[0];

    for (i = 1; i < n; i++)
    {
        if (current_sum + array[i] > array[i])
        {
            current_sum = current_sum + array[i];
        }
        else
        {
            current_sum = array[i];
        }

        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }

    printf("The largest sum of contiguous subarrays is: %d\n", max_sum);

    return 0;
}
