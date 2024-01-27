#include<stdio.h>
#include<math.h>
int main()
{
    int side ;
    printf("Enter the value of side of square\n");
    scanf("%d",&side);
    printf("The Area is %.2f",pow(side,2)); 
    //.2f means 2 numbers after decimal or point '.'
    return 0;
}
