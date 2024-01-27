#include <stdio.h>

void change(int b);
int main()
{
    int b = 344; // this B is the value of function main
                 // it Can aslo be named as Soham But with different surname
                 // it has its own job and function
    printf("Before Change value is %d\n", b);
    change(b);
    printf("Now The Value is %d\n", b);
    // so in this prgram the values of b will not be changed
    return 0;
}
void change(int b) // this is an function named b Like
                   // like B = Soham Deshmukh which i am
{
    b = 77;
}
/*
void change(int a)
{
        int a = 77; // as we have declared that int a is an integer
    no need to again define it as an int an make
    errors in program
}
*/