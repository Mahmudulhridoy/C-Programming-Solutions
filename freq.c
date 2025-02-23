#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    int freq[n]; // Ensure the size matches `n`
    int i, j, count;

    // Input array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter array element-%d: ", i + 1);
        scanf("%d", &array[i]);
        freq[i] = 1; // Initialize frequency array
    }

    // Calculate frequency
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (freq[i] != 0) // Process only unmarked elements
        {
            for (j = i + 1; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                    freq[j] = 0; // Mark duplicates
                }
            }
            freq[i] = count;
        }
    }
    int count1 = 0;

    // Display frequencies
    for (i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            count1++;
            printf("%d occurs %d times\n", array[i], freq[i]);
        }
    }
    // printf("total duplicate elements: %d", count1);

    return 0;
}
