#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The Number is %d\n", i);
            /* if is given to avoid statement till numner 9 */
        }
        i++;
    }

    return 0;
}