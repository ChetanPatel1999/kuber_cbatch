// wap to print factors of given number.
//  12 = 1 2 3 4 6 12
//  20 = 1 2 4 5 10 20
//  15 = 1 3 5 15
#include<stdio.h>
void main()
{
 int num ,i;
 printf("enter a num : ");
 scanf("%d",&num);//12
 printf("factors of %d : ",num);
 for(i=1;i<=num;i++)//12
 {
   if(num%i==0)
   {
     printf("%d ",i);//1 2 3 4 6 12
   }
 }

}
