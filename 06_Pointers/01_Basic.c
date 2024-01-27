#include <stdio.h>
int main()
{
    int a = 26;
    int *b = &a;
    printf("The value of a is %d\n", a); // Shows value of a

    printf("The value of a is %d\n", *b); // b points at a so it prints value of a

    printf("The Adress of a is %u\n", &a); // this is memory address of a

    printf("The Adress of b is %u\n", b); // b points at memory adress of a

    printf("The Adress of b is %u\n", &b); // this is Proper memory adress
                                           //  of variable b
    return 0;
}