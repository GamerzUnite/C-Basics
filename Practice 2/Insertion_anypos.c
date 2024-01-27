#include <stdio.h>
int main()
{
    //Insertion of element at any position;
    int a, size, pos, element, array[10];
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter %d elements in the array\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array created is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    printf("Enter the Position u want to insert element at :");
    scanf("%d", &pos);
    printf("Enter the number u want to insert ");
    scanf("%d", &element);

    size = size + 1;
    for (int i = 0; 1 < size; i++)
    {
        array[i - 1] = array[i - 2];
        if (i =(pos - 1))
        {
            array[i] = element;
            break;
        }
    }
    printf("The list created is :");
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}