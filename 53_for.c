//wap to print odd number serise
#include <stdio.h>
void main()
{
    int i,n;
    printf("enter ending value of odd number serise: ");
    scanf("%d",&n);//30
    for (i = 1; i <= n; i++)//21
    {
        if (i % 2 == 1) 
        {
            printf("%d ", i);// 1 3 5
        }
    }
}