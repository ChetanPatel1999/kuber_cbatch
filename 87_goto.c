//wap to print table of given number.
#include<stdio.h>
void main()
{
  int i,n;
  printf("enter a num : ");
  scanf("%d",&n);
  i=1;
  lable:
  printf("%d \n",i*n);
  i++;
  if(i<=10)
  {
    goto lable;
  }
}