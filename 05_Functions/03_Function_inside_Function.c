#include <stdio.h>
void college();
void school();
void life();

int main()
{
    life();
    return 0;
}
void life()
{
    printf("this is Life\n"); // we can not creat void inside void
    college();                // like creating content of college in void
    // life itself
}
void college()
{
    printf("soham goes to college\n");
    school();
}
void school()
{
    printf("sumeet goes to school\n");
}