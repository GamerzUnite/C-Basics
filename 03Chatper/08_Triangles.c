#include <stdio.h>
int main()
{
    int ch;
    int a, b, c;
    int d = (a*a)+(b*b);
    printf("Enter 1st side \n ");
    scanf("%d", &a);
    printf("Enter 2nd side\n");
    scanf("%d", &b);
    printf("Enter 3rd side\n");
    scanf("%d", &c);
    printf("\n1.Eqilateal triangle");
    printf("\n2.Isosceles triangle");
    printf("\n3.Scalane triangle");
    printf("\n4.Right angle triangle");
    printf("\nEnter ur choice \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (a == b == c)
        {
            printf("Equilateral triangle");
        }
        else
        {

            printf("Not Equilateral triangle");
        }
        break;
    case 2:
        if (a == b != c || a == c != b || b == c != a)
        {
            printf("Isosceles triangle");
        }
        else
        {
            printf("Not Isosceles triangle");
        }
        break;
    case 3:
        if (a != b != c)
        {
            printf("Scalane triangle");
        }
        else
        {
            printf("Not Scalane triangle");
        }
        break;
    case 4:
       if (d=c*c)
        {
            printf("Right Angle Triangle");
        }
        else
        {
            printf("Not Right Angle Triangle");
        }
    }
    return 0;
}