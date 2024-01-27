#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    if (a > b && a > c)
    {
        printf("The Greatest Number is %d\n", a);
    }

    if (b > c && c < b)
    {
        printf("%d Is the Greatest Number\n", c);
    }
    if (c > b)
    {
        printf("%d Is the Greates Number\n", c);
    }
    // This Was Created To Try some stuff Like Nested If
   // Program Learned
    return 0;
}