#include <stdio.h>
// Test Program To see if and Else With Age and Confirm wether is some one
// eleligable to Drive or not Also Double Symbole Is important
// if >= not given then 18yrs will not be elegible to drive
int main()
{
    int a;
    printf("Enter Your Age\n");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("You Are Eligiable to Drive Vehicals\n");
    }
    else
    {
        printf("Sorry U are not eligable to Vehicals");
    }
    return 0;
}