#include <stdio.h>
int main()
{
    int n;
    int a = 2;
    int prime = 1;
    printf("Enter number to confirm its prime or not\n");
    scanf("%d", &n);

    while (a<n)
    {
        a++;
        if (n % a == 0 && a<n)// in this loop we needed to put a limit becuse
        // without limit it use to divide number by itself and cant confirm its prime
        //or not
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
    return 0;
}