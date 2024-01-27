#include<stdio.h>
int ptp(int *a);
int ptp(int *a)
{
    int i =26;
    printf("%d\n",i);
}
int main()// this program is made by mistake
//this program transfers the value of i at adress of a

{
    int a,c;
     ptp(&a);   
    return 0;
}