//wap to print square 1 to 10.
#include<stdio.h>
void main()
{
int i,n;
printf("enter a num : ");
scanf("%d",&n);//20
for(i=1;i<=n;i++)
{
    printf("square of %d = %d \n",i,i*i);
}
}