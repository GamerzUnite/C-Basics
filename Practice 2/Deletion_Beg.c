#include <stdio.h>
int main()
{
    //Deletion of array at the beginning
    int a, b, size, array[10];
    printf("This Program is for deletion of array at beginning\n");
    printf("Enter The Size of array: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (a = 0; a < size; a++)
    {
        scanf("%d", &array[a]);
    }
    printf("\n");
    printf("The Array before deletion is \n");
    for (a = 0; a < size; a++)
    {
        printf("%d\t", array[a]);
    }
    printf("\n");
    printf("Array after deletion is\n");
    for (a = 0; a < size; a++)
    {
        array[a] = array[a + 1];
    }
    size--;
    for (a = 0; a < size; a++)
    {
        printf("%d\t", array[a]);
    }

    return 0;
}