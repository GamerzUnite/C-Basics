#include<stdio.h>
int main()
{
    int a=1 , n;
    printf("Enter The Number Of table u want \n");
    scanf("%d",&n);
    for(a ; a ; a++)
    {
        printf("%dx%d=%d\n",n,a,a*n);
        if(a==10)
        {
            break;
        }
    }

    return 0;
}