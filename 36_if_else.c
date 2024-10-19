// wap to check given number is divisbel by 3 and 4 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num :  ");
    scanf("%d", &num);//15
    if(num%3==0  && num%4==0 )
    {
        printf("num is divisible by 3 and 4");
    }
    else{
        printf("num is not divisible by 3 and 4");
    }
}