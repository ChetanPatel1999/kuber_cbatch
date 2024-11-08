//wap to print even number serise
#include <stdio.h>
void main()
{
    int i,n;
    printf("enter ending value of even number serise: ");
    scanf("%d",&n);//30
    for (i = 1; i <= n; i++)//21
    {
        if (i % 2 == 0) 
        {
            printf("%d ", i);// 2 4 6 8 10 12 14 16 18 20
        }
    }
}