#include <stdio.h>
#include <conio.h>
void printArray(int *a, int size)
{
    printf("The list is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}
void bubblesort(int *a, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        printf("\nItteration %d :-\n", i + 1);
        for (int j = 0; j < size; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            printf("%d\t", a[j]);
        }
        printf("\n");
    }
    printf("\n\nAfter Sorting :-\n");
}
int main()
{
    int a[20];
    int size;
    printf("Enter The size of list :");
    scanf("%d", &size);
    printf("Enter The list u want to sort \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, size); // Function to display the list
    bubblesort(a, size);//to sort the array
    printArray(a, size);// To display the final list

    return 0;
}