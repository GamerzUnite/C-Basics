#include <stdio.h>
int main()
{
    int a, n, fac=1;
    printf("Enter ther number of factorial u want\n");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        fac *= a;//put vale of fac or else complier will put garbage value
        printf("factorial of %d is %d\n", a, fac);
    }
    return 0;
}