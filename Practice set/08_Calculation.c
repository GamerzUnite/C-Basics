#include<stdio.h>
int add(int a, int b);
int add(int a , int b)
{
int sum ;
sum=a+b;
}
int sub(int a,int b);
int sub(int a,int b)
{
    int sum;
    sum=a-b;
}
int mul(int a,int b);
int mul(int a,int b)
{
    int sum;
    sum = a*b;
}
int div(int a,int b);
int div(int a,int b)
{
    int sum;
    sum=a*b;
}
void main()
{
int a,b,c;
printf("Give two number To do Calculations\n");
scanf("%d%d",&a,&b);
c = add(a,b);
printf("Addition is %d\n",c);
c = sub(a,b);
printf("Subtraction is %d\n",c);
c = div(a,b);
printf("Divsion is %d\n",c);
c = mul(a,b);
printf("Multiplication is %d\n",c);

} 
