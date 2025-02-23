#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("array elemets:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest, second;
    largest = second = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
            second = arr[i];
    }
    printf("Second largest element: %d\n", second);
    return 0;
}
