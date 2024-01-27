#include<stdio.h>
int main()
{
int a,n,fac;
a=1;
fac=1;
printf("Enter Number Till U want factoral of \n");
scanf("%d",&n);
for(a ; a<=n ; a++)
{
    fac*=a;//here fac is kept 1 as the relational operator = is also used
    printf("factorial of %d is %d\n",a,fac);
}

    return 0;
}