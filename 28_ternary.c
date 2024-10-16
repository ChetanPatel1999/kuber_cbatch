// wap to check given number is less than 500 and greater than 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    num > 500 ? printf("num is greater than 500") : printf("number is smaller than 500");
}