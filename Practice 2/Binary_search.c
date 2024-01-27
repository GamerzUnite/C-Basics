#include <stdio.h>
int main()
{
    int a, size, search, array[30];
    printf("Enter The size of array :");
    scanf("%d", &size);
    printf("Enter %d Elements in the list :", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array created is ");
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    printf("Enter The search element u want :");
    scanf("%d", &search);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == search)
        {
            printf("The Elemtent is found at position: %d\n", i + 1);
        }
        if (array[size] != search)
        {
            printf("The element did not found \n");
            break;
        }
    }
    return 0;
}