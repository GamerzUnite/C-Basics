#include <stdio.h>
int main()
//  Program To take an Input Like Rating And Reply to it
// Title-Case Program With Break Included
// Want To Upgrade - Giving Reply To Them Perfectly
{
    int a;
    printf("Thanks For Coming Please Give your Rating 1-5 \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf(" Wanna Die For Rating of  %d ?", a);
        break;
    case 2:
        printf(" Think Again To give This Rating u Have Chance ");
        break;
    case 3:
        printf(" Average Raters Noobs ");
        break;
    case 4:
        printf("Thanks For a Good Rating of  %d", a);
        break;
    case 5:
        printf("YOOO Thanks For Rating of  %d ", a);
        break;
    default:
        printf("The Rating Given %d ", a);
        printf("is Invalid U FOOL");
    }

    return 0; // Completed
}
