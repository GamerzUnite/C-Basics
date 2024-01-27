#include <stdio.h>
int main()
{
    int n;
    int a = 2; // a =2 is taken becuse after increment the value will be 3
    // as 2 can divide it self so 2 has been taken so it will get converted to 3
    // also because 2 is an Even Prime Number
    int prime = 1;
    printf("Enter a number to check its prime or not\n");
    scanf("%d", &n);
    for (a; a < n; a++)
    {
        if (n % a == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("\n%d Is not a prime number ", n);
    }
    else
    {
        printf("%d is a Prime Number \n", n);
    }
    return 0;
}