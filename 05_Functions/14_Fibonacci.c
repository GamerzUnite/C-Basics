#include <stdio.h>
int fib(int n);
int main()
{
    int a;
    printf("Enter Number of Fibonnaci u want\n");
    scanf("%d", &a);
    printf("The Fibonnaci is %d", fib(a));
    return 0;
}
int fib(int n)
{
    int a, b;
    b = (n - 1);
    a = (n - 2);
    n = (a + b);//logic issue there is +-1 number difference 
return n;
}