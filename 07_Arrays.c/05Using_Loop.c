#include <stdio.h>
int main()
{
    int marks[10];

    for (int a = 0; a < 5; a++)
    {
        printf("Enter the marks of student %d\n",a+1);
        scanf("%d",marks[a]);
    }
    for (int a = 0; a < 5; a++)
    {
        printf("The marks of students is %d\n",marks[a]);
    }
    return 0;
}