#include <stdio.h> //তুলনা করার জন্য ব্যবহৃত
#include <stdbool.h>
int main()

{
    /*
    == (equal)
    <= (less or equal)
    >= ( greater or equal)
    != ( not equal)
      */

    int a = 5, b = 6;
    // printf("%d", a < b);  result= 1
    // printf("%d", a > b); result =0

    // printf("%d", a == b); result=0

    // printf("%d", a != b); result=1
    /*bool isEqual = a == b;
    printf("%d", isEqual);*/
    bool flag = a <= b;
    printf("flag= %d", flag);

    // এভাবে সবগুলা কাজ করে
}