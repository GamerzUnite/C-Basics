#include <stdio.h>
int ctf(int f);
int main()
{
    int c, a;
    printf("Enter The value of Celsius\n");
    scanf("%d", &c);
    a =ctf(c);
    printf("The Value of fahrenheit is %d", a);
    return 0;
}
int ctf(int f)
{
    float convert ;
    convert = f * 9 / 5 + 32;
}