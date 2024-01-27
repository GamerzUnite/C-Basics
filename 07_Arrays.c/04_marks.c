#include <stdio.h>
int main()
{
    //this program does not work as i dont know how aarays work
    int a;
    int i = 0;
    int marks[10];
    printf("Enter The Number of students u have marks of\n");
    scanf("%d", &a);
    for (i = 0; a > i; i++)
    {
        printf("Enter the marks of student %d\n", i);
        scanf("%d", marks[i]);
    }
    printf("The List of marks is\n");
    for (i = 0; i < a; i++)
    {
        printf("%d\t", marks[i]);
    }
    printf("%d",marks[i]);
    return 0;
}