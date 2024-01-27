#include <stdio.h>
int main()
{
    int a = 25;
    int *b = &a;
    printf("The value of b is %u\n", b);
    b++;//if we did increment the bits will be increased as 1 int value
    // = to 4bits
    printf("The value of b after increment is %u\n",b);

    return 0;
}