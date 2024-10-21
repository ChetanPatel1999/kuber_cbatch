// wap to find greatest number between three number.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter three number : ");
    scanf("%d%d%d", &num1, &num2, &num3);// 44 34 56
    if (num1>num2 && num1>num3)
    {
        printf("greatest num : %d", num1);
    }
    else if (num2>num3)
    {
        printf("greatest num : %d", num2);
    }
    else
    {
        printf("greatest num : %d", num3);
    }
}