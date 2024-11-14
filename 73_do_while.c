// wap to print sum of number which given by user till user want.
#include <stdio.h>
void main()
{
    int num, sum = 0, n;
    do
    {
        printf("enter a num :");
        scanf("%d", &num); // 8
        sum = sum + num;   // sum= 25
        printf("you want to add more number so press 1 : ");
        scanf("%d", &n);//6
    } 
    while (n == 1);

    printf("total sum = %d",sum);
}