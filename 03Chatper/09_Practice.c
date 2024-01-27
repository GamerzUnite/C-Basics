#include <stdio.h>
int main()
{
    /* i dont know why But The Total is Divided by 3 I need To know The Logic
    Can Some one Explain??!!*/
    int M, C, E;
    float total;
    printf("Enter Your Marks of Maths Out of 100 \n");
    scanf("%d", &M);
    printf("Enter Your Marks of PCI out of 100 \n");
    scanf("%d", &C);
    printf("Enter Your Marks Of EEc out of 100 \n");
    scanf("%d", &E);
    total = (M + C + E)/300*100;
    if (total < 40 || M < 33 || C < 33 || E < 33)
    {
        printf("sorry But u have Failed In exams\n%f", total);
    }
    else
    {
        printf("You have Passed in The exams\n%f", total);
    }
    return 0;
}