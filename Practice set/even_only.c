#include <stdio.h>
int main()
{
    int a = 0;
    for (a; a <= 100; a++)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        else
        {
            continue;
        }
    }
    return 0;
}