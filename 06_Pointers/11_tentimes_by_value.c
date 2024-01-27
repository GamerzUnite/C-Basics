#include <stdio.h>// this program is made with call by valu
void ten(int a);
int main()
{
    int a,b;
    printf("Enter a number to get its 10x value\n");
    scanf("%d", a);
    ten(a);
    printf("The value is %d",b);
    return 0;
}
void ten(int a)
{//this program make the value x10 by call by value
int c;
c = a*10;
printf("The value 10X is %d",c);
}// this program does not work with call by value;