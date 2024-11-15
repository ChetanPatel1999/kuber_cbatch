// wap to print even number using continue stmnt.
#include <stdio.h>
void main()
{
    int i;
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    printf("even number serise : ");
    for (i = 1; i <= n; i++)//3
    {
        if(i%2==1)
        {
            continue;
        } 
        printf("%d ", i);// 2 4 6 8 10
    }
}