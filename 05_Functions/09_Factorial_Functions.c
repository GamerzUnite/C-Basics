#include<stdio.h>
int factorial(int a);// after returning a the keyword if will check
//the value here to see if its 1 or not
//if not he else program will be continued
int main()
{ //upgrade - User Can input the Value of number he want
int a;
printf("Enter the number of factorial u want\n");
scanf("%d",&a);
printf("The Factorial of %d is %d", a , factorial(a));
    return 0;
}
int factorial(int a){
    if(a==1 || 1==0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
    } // in this value is Multiplyed by value-1 till it becomes 1 or 0

}