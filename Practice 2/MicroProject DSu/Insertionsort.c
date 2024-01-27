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
void sort()
{

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
}