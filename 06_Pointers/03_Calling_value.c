#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4;//call by value means passing a copy of value which wont affect 
    // main program
    int b = 7;
    printf("the sum of 4+7 is %d", sum(a, b));
    return 0;
}
int sum(int a, int b)
{// actual values are not passed
    return a + b;
}