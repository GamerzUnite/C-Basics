#include <stdio.h>
int main()
{
int a=0;
int n;
int num = 0;
printf("which number u wanna repeat its times? \n");
scanf("%d",&n);
while(a<n)
{
    a++;
    num++;//num added so we can see how many times it is repeted
    printf("%d,%d\n",n,num);
}

    return 0;
}