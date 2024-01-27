#include<stdio.h>
float force(float mass);
int main()
{
    float mass,b;
    printf("Enter The value of mass in Kgs\n");
    scanf("%f",&mass);
    force(mass);
    return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    printf("The force is %.2f netwon",result);
}