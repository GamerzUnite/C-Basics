#include <stdio.h>
void pattern(int n);
int main()
{
    int n = 4;
    pattern(n);
    return 0;
}
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pattern(n - 1);// this is to do n-1 and again start the loop
    for (int i = 0; i < n ; i++)//This condition is needed to use loop 4 times 
    {
        printf("*");
    }
    printf("\n");
}