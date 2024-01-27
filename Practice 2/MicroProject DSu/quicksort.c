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
int part(int a[], int low, int high)
{
    int pivote = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (a[i] <= pivote)
        {
            i++;
        }
        while (a[j] > pivote)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    // swaping a[low] and a[j]
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
int quicksort(int *a, int low, int high)
{
    int part;
    part = (part, low, high);   // Index of parts
    part = (a, low, part - 1);  // sort left array
    part = (a, part + 1, high); // sort rightsub array
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
    printArray(a, size);
    quicksort(a, 0, size - 1);
    printArray(a, size);

    return 0;
}