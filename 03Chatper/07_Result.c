#include <stdio.h>
int main()
{
    // This Program Will Put u In Classes Based On Your
    // Marks Given To The Program
    // Upgrade - u cant Give More marks Than 100% In this Program 
    // Or marks Less than 0%
    int marks;
    printf("Enter Your Marks To see Your Passing Class \n");
    scanf("%d", &marks);
    if (marks >= 70 && marks<=100)
    {
        printf("U have Passed With First Class Dis Congratulations");
    }
    else if (marks >= 50 && marks <= 70)
    {
        printf("Congratulation U have Passed With First Class");
    }
    else if (marks >= 30 && marks <= 50)
    {
        printf("U have Passed With Second Class ");
    }
    else if (marks < 30 && marks>=0)
    {
        printf("Sorry U have Failed This year");
    }
    else 
    {
       printf("Invalid Marks Noted Warning!!! ");
    }

    return 0;
}