#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Vaild Number\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("The Numbe %d is valid\n");
    }
    else if (a == 2)
    {
        printf("The Number %d is Valid");
    }
    else if (a == 3)
    {
        printf("The Number is %d is Valid ");
    }
    else
    {
        printf("The Number Given is Not Valid");
    }
    return 0;
}