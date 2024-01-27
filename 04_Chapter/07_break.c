#include <stdio.h>
int main()
{
    int a = 0;
    for (a; a < 100; a++)
    {
        printf("%d\n", a);
        if (a == 100)
        {
            break;
        }
    }

    return 0;
}/*
<= , >= this retational operators does not work due to unknown reasons
*/
