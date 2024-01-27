#include<stdio.h>
int main()
{
    int a = 26;
    int *b = &a;
    printf("The Adress of the A Variable is %u\n",b);
    printf("The Value of variable a is %d \n",*b);
    return 0;
}