#include <stdio.h>
int main()

{
    // initializing
    /*int a[5]={1,3,5,36,6}; // data_type variable_name size
    int i[]={1,3,5,36,6};
    int i[5]={0};
    int i[5]={10,20};*/

    int n, a[5];
    scanf("%d", &n);

    int i;
    for (i = 0; i < 5; i++)
    {

        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%dth input: %d\n", i + 1, a[i]); // address ber korar jonno & used kora lagbe
    }
}
