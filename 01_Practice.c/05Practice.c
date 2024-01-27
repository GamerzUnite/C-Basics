#include <stdio.h>
int main()
{
    // Creating Program to calculate Simple intrest by user Not from own
    //  Upgrade Also Wanna make Compound intrest in it too
    float principle;
    float years ;
    float rate ;
    int simpleIntreast = (principle * years * rate) / 100;
    printf("User Please enter The Given Value To Ectract Simple Intreas \n ");

    printf(" Enter The Value of Principle \n");
    scanf("%f", &principle);

    printf("Enter The Period Of years Given \n");
    scanf("%f", &years);

    printf(" Enter The Rate Given \n");
    scanf("%f", &rate);
    
    printf(" The Total Simple Intreast Calculated is %f" ,principle*rate*years / 100);

    return 0;
}