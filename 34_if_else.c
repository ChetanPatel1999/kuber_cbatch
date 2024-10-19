//wap to check given number is divisible by 5 or not.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num :  ");
  scanf("%d",&num);
  if(num%5==0)
  {
    printf("num is divisible by 5");
  }
  else{
    printf("num is not  divisible by 5");
  }
}