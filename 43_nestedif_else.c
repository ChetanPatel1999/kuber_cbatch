// wap to check given number is nagative-even or
// positive-even or nagative-odd or positive-odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //9
    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            printf("postive-even");
        }
        else
        {
            printf("positive odd");
        }
    }
    else
    {
        if (num % 2 == 0)
        {
            printf("nagative-even");
        }
        else
        {
            printf("nagetive -odd");
        }
    }
}