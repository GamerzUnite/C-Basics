#include <stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int main()
{
    int c;
    int a, b;
    printf("Enter the values\n"); // upgraded user can aslo input values
    scanf("%d%d", &a, &b);
    c = sum(a, b);
    printf("sums is %d\n", c);
    c = sub(a, b); // c is used as an function call to call sub function
    printf("Subtraction is %d\n", c);
    return 0;
} // c is called 2 times as its value is overwriten so it can be used in 2 different caluculation
int sum(int a, int b)
{
    int total;
    total = a + b; // Upgrade 2] learned that function body can be written below too
}
int sub(int a, int b)
{
    int total;
    total = a - b;
}