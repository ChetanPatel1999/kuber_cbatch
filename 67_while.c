//wap to print tble of given number.
#include<stdio.h>
void main()
{
 int i,n;
 printf("enter a num : ");
 scanf("%d",&n);
 i=1;
 while(i<=10)
 {
    printf("%d \n",i*n);
    i++;
 }
}