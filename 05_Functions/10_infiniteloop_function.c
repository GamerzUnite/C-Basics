#include <stdio.h>
int loop();
int main()
{
   int b = 1;
  loop(b);
}
int loop(int a)
{ 
     while(a!=0)
   {
       printf("%d",a++);
   }
    return 0;
}
