#include<stdio.h>
int main(){
    //Aim to make if and else program with Limits in numbers
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
//  v in this Part we have Created A range Between Ages
    if(age<=18 && age>=70) //no Need to add ";" on this part 
        // this ^ part Means AND in English or To seprate it u need to add & 2 times 
        // not 1
    {
        printf("u can drive the Vehical");
    }
    else{
        printf("u can not Drive The Vehical");
    }
    return 0;
}