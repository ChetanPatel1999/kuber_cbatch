//wap to check given num is in range (200-500) or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num :  ");
    scanf("%d", &num);//245
    if(num>200 && num<500)
    {
        printf("in range (200-500)");
    }
    else{
        printf("out of  range (200-500)");
    }
}