#include<stdio.h>

main(){
   //Program To Convert Celsius to Fahrenheit
   //Upgrade To even Convert Fahrenheit to Celsius
   //Upraded*
   float celsius = 1;
   float fah = 1;
   
   printf("Enter The Value OF Celsius or enter 0\n");
   scanf("%f",&celsius);

   printf("Enter The Value OF Fahrenheit Or enter 0 \n");
   scanf("%f",&fah);

   printf("Value Of Celsius is \n %f", celsius*9/5 + 32);
   printf("\nValue Of Fahrenheit is \n %f", fah-32*5/9 );

       return 0;
}