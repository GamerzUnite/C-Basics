#include<stdio.h>
int main()
{
    int i= 26;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("%d is the value\n",**ptr_ptr);
    return 0;
}