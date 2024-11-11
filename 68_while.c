//wap to facters of given number.
#include<stdio.h>
void main()
{
 int i,n;
 printf("enter a num : ");
 scanf("%d",&n);//12
 i=1;
 printf("factors of %d :  ",n);
 while(i<=n)
 {
    if(n%i==0)
    {
        printf("%d ",i);
    }
    i++;
 }
}