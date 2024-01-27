#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Value to printf till 20 which is less than 20 \n");
    scanf("%d", &a);
    do
    {
        printf(" values are %d\n", a);
        a++;
    } while (a <= 20);
    return 0;
}