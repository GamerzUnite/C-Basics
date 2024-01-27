#include <stdio.h>
int main()
{
            // Addition, subtactin and comparioson of pointers
    int a = 25;
    int b = 24;
    int *c = &a, *d = &b;
    // Subtraction
    // printf("%d\n",&d);
    // printf("%d\n",&c);
    // printf("The Subtraction from 2 pointers is \n");
    // int i = *c - *d;
    // printf("%d",i);

    // comparison
    // printf("%d\n", c <= d); // output 0 as the condition is false
    // printf("%d\n", d <= c); // output 1 as the condition is true

    // Addition
    // int i = (*c + *d) ;
    // printf("%d\n",i); //Out is the addition of a and b ;


    return 0;
}