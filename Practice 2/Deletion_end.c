#include <stdio.h>
int main()
{
     //Deletion of array at the End
    int a, b, size, element, array[10];
    printf("This program is from Deletion at the end of array\n");
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter %d elements", size);
    for (a = 0; a < size; a++)
    {
        scanf("%d",&array[a]);
    }
    printf("\n");
    printf("The Array before deletion is \n");
    for (a = 0; a < size; a++)
    {
        printf("%d\t", array[a]);
    }
    printf("\n");
    printf("Array after deletion is\n");
    size--;
    for (a = 0; a < size; a++)
    {
        printf("%d\t", array[a]);
    }
    
    return 0;
}