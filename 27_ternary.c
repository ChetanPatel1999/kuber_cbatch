//wap to check greatest  number beetween two number.
#include<stdio.h>
void main()
{
  int num1,num2;
  printf("enter two number : ");
  scanf("%d%d",&num1,&num2);
  num1>num2?printf("greatest num : %d",num1) : printf("greatst num : %d",num2);
}