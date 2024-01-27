#include <stdio.h>
int main()
{
    float tax = 0;
    float income;
    // tax is kept 0 so to add an divided value without any issues
    printf("Enter Your Per Anum Income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
        // keep an eye On the Way >< this signs works as They are confusing a bit
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
        // the tax is already divided by 100 so can be directly multiplyed
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
        // diretly The formula cant be added without adding tax in it
        //  i dont know why
    }
    printf("The Tax u Have to pay is %f at the end of this year\n", tax);
    /* Upgrade needed - If the Value is Like 1000001 the tax Calculated Will be null
    so there need to be an provesion of calculating properly
    this is The loop Which is been spoted by me
    Can we Fix It?*/

    return 0;
}