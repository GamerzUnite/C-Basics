#include <stdio.h>
int swap(int *a, int *b);
//int not_swap(int a, int b);
int main()
{//Call By reference means passing real value which can affect main program
    int a = 4;
    int b = 5;
    int c;
    printf("The value before swap %d %d\n", a, b);
    //not_swap(a, b); this function does not work as its call by value
    swap(&a,&b);
    printf("The value after swap is %d %d\n", a, b);
    return 0;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;// actual vales are passed
    *b = temp;
}
/*int not_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}*/