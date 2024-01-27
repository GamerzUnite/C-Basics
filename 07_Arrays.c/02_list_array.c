#include <stdio.h>
int main()
{//this program can make and display the list of data entered
    int marks[5];

    for (int a = 0; a < 5; a++)
    {
        printf("Enter the marks of student %d\n", a + 1);
        scanf("%d", &marks[a]);
    }// a+1 is a different body//and a++ is different so 
    // thats why a is not overwritten by it
    for (int a = 0; a < 5; a++)
    {
        printf("The marks of student %d is : %d\n", a + 1, marks[a]);
    }// same works here                  a+1 is different part, marks[a]
    // marks[a] the value of 2 depends on a++ in for loop

    return 0;
}