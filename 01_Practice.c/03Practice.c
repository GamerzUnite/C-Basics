#include <stdio.h>
int main()
{ 
    // Project made to Extract Area Of rectangle By Its User
    // it was easy
    int length, breadth;

    printf("What Is the Length Of the Rectangle?\n");
    scanf("%d", &length);

    printf("What Is the breadth Of the Rectangle?\n");
    scanf("%d", &breadth);

    printf("The Area Of the Given Rectangle is %d", length*breadth);
    return 0;
}