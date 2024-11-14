#include<stdio.h>
void main()
{
 int i,n,s,f=0;
 printf("enter table number : ");
 scanf("%d",&n);//6
 printf("enter number you want serach in table : ");
 scanf("%d",&s);//24
 for(i=1;i<=10;i++)//4
 {
   if(s == n*i)
   {
     f=1;
     break;
   }
 }
 if(f==1)
 {
    printf("element is found in table");
 }
 else{
    printf("element is not found in table");
 }
}