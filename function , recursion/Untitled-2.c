#include <stdio.h>
int main()
{
    int n;
    int i, j;
    int count;
    int found = -1;
    printf("Enter the number of the elements:\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements no.%d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            printf("\n\nmajority  element of the array is %d\n", arr[i]);
            found = 0;
        }
    }
    if (found == -1)
    {
        printf("Majority element of the array doesn't exist.\n");
    }
}