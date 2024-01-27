#include <stdio.h>
int main()
{
    // Goal To Check if The Year is Leap year or not
    // Goal Incomple Becuse Lack in Basic Logic
    int a;
    int b;
    printf("Enter The Year To see If its Leap Year or not \n ");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf(" The Year %d is an Leap year", a);
    }
    else
    {
        printf("The year %d is not an Leap year", a);
    }

    return 0;
}