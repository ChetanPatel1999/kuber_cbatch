//wap to print your friends name according to frist latter of name.
#include<stdio.h>
void main()
{
 char ch;
 printf("enter frist later of name : ");
 scanf("%c",&ch);//y
 switch(ch)
 {
  case 'a': printf("aman");break;
  case 'c': printf("chetan");break;
  case 'k': printf("kuber");break;
  case 'p': printf ("puneet super star");break;
  case 't': printf ("tinku lala");break;
  case 'l': printf("lorance bishnoi");break;
  default : printf("you dont have friend which name start with %c ",ch);
 }

}