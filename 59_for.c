//wap to print avrage  1 to n;
#include<stdio.h>
void main()
{
 int i,n;
 float avrage,sum=0;
 printf("enter a num : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)// i = 11
 {
   sum=sum+i;//55
 }
 avrage=sum/n;
 printf("avrage of 1 to %d = %.2f",n,avrage);
 
}