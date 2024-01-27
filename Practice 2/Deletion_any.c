#include <stdio.h>
int main()
{
    int a, size, pos, array[10];
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
    printf("Enter The position of element u want to delete:");
    scanf("%d", &pos);
    for (int i = 0; i < size; i++)
    {
        if( i = (pos-1))
        {
            array[i]=array[i+1];
        }
        if(i = size)
        {
            array[i-1]=array[i+1];
            break;//condition need to be fixed for making it perfect;
        }//a bit of issues in the shifting of elemets
    }
    printf("\n");
    printf("The list created is :");
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}