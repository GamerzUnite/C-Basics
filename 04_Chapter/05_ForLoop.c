#include <stdio.h>
int main()
{
    int a = 0;
    int b;
    printf("Enter Value to Print Till That Numbers\n");
    scanf("%d",&b);
    for (a; a <= b; a++)
    {
        printf("%d\n",a);
    }

        return 0;
}