#include <stdio.h>
int avg(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter 3 number of average u want\n");
    scanf("%d%d%d", &a,&b,&c);
    printf("The average is %d",avg(a,b,c));
    return 0;
}
int avg(int a, int b, int c)
{
    int result;
    result = (a + b + c) / 3;
     
}