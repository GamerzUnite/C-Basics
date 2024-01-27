#include <stdio.h>
int add(int a, int b);
int add(int a, int b)
{
    int sum; // This program has function int used

    sum = a + b;
}
int sub(int a, int b);
int sub(int a, int b)
{
    int sum;
    sum = a - b;
}
int mul(int a, int b);
int mul(int a, int b)
{
    int sum;
    sum = a * b;
}
int div(int a, int b);
int div(int a, int b)
{
    int sum;
    sum = a / b;
}
int main()
{
    int c, sum;
    int a, b;
    printf("Enter 2 numbers of calculation u want\n");
    scanf("%d%d", &a, &b);
    c = add(a, b);
    printf("Addition is %d\n", c);
    c = sub(a, b);
    printf("Subtraction is%d\n", c);
    c = mul(a, b);
    printf("multiplication is %d\n", c);
    c = div(a, b);
    printf("Divsion is %d\n", c);

    return 0;
}
