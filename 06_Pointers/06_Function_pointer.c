#include<stdio.h>
void function (int a);
int main()
{
int i = 26;
printf("The Adress of variable is %u\n",&i);
printf("After applying function\n");
function(i);
    return 0;
}
void function (int a)
{
   printf("The adress is %d",&a);
}