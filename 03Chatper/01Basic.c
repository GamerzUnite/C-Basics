#include<stdio.h>
//Program to State If the Number is Even or odd
int main(){
int a ,b;
printf("User Enter A number \n");
scanf("%d", &a);
// this Program need '%' to Find The Reminder and State 
//Weather its Even or not also == is Important if not given error
if(a % 2==0){
printf("The number %d is Even", a);
}
else{
    printf("The Number %d is Odd",a);
}
    return 0;
}