// strlen() := its return string length
#include<stdio.h>
#include<string.h>
void main()
{
   char ch[50];
   printf("enter string : ");
   gets(ch);
   int l;
   l=strlen(ch);
   printf("string length : %d",l);
}