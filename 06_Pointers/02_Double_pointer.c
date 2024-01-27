#include <stdio.h>
int main()
{
    int a ;
    a = 26;
    int *b = &a;
    int *c = &a;
    printf("%d",*c);
    return 0;
}