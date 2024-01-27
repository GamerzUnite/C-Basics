#include <stdio.h>
void sumAndavg(int a,int b);
void sumAndavg(int a,int b)
{
    int sum = a+b;
    printf("The sum is %d\n",sum);
    float avg = (a+b)/2;
    printf("The avg is %f\n",avg);
}
int main()
{
    int a, b;
    printf("Enter 2 values to get sum and average\n");
    scanf("%d",& a);
    scanf("%d",& b);
    sumAndavg(a,b);
    
    return 0;
}
