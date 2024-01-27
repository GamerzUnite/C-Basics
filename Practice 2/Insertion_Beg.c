#include <stdio.h>
int main()
{
    // Insertion at Beginning of an array Completed
    int array[10];
    // This program is done at home
    // so just edit the header file,int main to void main and clrscr()
    int a, index, size, element;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter the element of the list\n");
    for (a = 0; size > a; a++)
    {
        scanf("%d", &array[a]);
    }
    printf("\n");
    printf("the list before insertion is\n");
    for (a = 0; size > a; a++)
    {
        printf("%d\t", array[a]);
    }
    printf("\n");

    printf("Enter The element u want to insert in array at beginning :\n");
    scanf("%d", &element);
    printf("\n");
    size++;
    for (a = size; a > 1; a--)
    {
        array[a - 1] = array[a - 2];
    }
    array[0] = element;
    printf("\n");
    printf("Array after element insertion\n");
    for (a = 0; a < size; a++)
    {
        printf("%d\t", array[a]);
    }
    return 0;
}