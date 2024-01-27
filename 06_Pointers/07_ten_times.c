#include <stdio.h>
int ten(int *a);
int main()
{
    int a;
    printf("Enter a number to get its 10x value\n");
    scanf("%d", &a);
    printf("The value is %d", ten(&a));
    return 0;
}
int ten(int *a)
{//this program make the value x10 by call by reference
    return (*a) * 10;
}