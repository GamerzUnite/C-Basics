#include <stdio.h>
int main()
{
    int a, n;
    int sum = 0;
    printf("Enter the Number till u want sum of it\n");
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        sum = sum + a;
        printf("%d\n", sum);
    }
    return 0;
}