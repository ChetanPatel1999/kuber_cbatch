//wap to check voter is eligible for casting vote or not.
#include<stdio.h>
void main()
{
  int age;
  printf("enter your age : ");
  scanf("%d",&age);//7
  age>=18?printf("eligible for voting"):printf("not eligible for voting");
}