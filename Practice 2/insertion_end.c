#include <stdio.h>
int main()
{
    //Insertion at the end of array 
    int i, b, element, size;
    int array[10];
    printf("This program does Insertion at he end\n");
    printf("Enter the Size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array created is \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    printf("Enter The element u want to insert at the end: ");
    scanf("%d", &element);
    size++;
    array[size - 1] = element;//becuase index is always n-1
    printf("The array after insertion is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
