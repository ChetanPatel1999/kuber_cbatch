//take string from user
#include<stdio.h>
void main()
{
  char ch[50];
  printf("enter name : ");
  scanf("%[^\n]s",ch);
  printf("name : %s",ch);
}