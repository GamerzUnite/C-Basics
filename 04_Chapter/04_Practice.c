#include <stdio.h>
/*This Program Prints from to the number given by user*/
// program upgrade does not accept numbers in negative
//cons-only works on positive number not on negative
int main()
{
    int n;
    int a = 1;
    printf("Enter value to show till that number\n");
    scanf("%d", &n);
    if (n >= 0)
    {
        do
        {
            printf("%d\n", a);
            a++;
        } while (a <= n);
    }
    else
    {
        printf("The Number is in Negative");
    }
    return 0;
}