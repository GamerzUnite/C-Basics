#include <stdio.h>
int main()
{
    int a, n, sum;
    printf("Which Multiplication table u want \n");
    scanf("%d",&a);
    n = 1;
    while (n <= 10)
    {
        printf("%dx%d=%d\n", a, n, a * n);
        n++;
    }
    return 0;
}