#include<stdio.h>
void main()
{
 char ch[50];
 int i,c=0;
 printf("enter a string :");
 gets(ch);//chetan
 printf("string : %s\n",ch);
 for(i=0;ch[i]!='\0';i++)
 {
  if(ch[i]=='a')
  {
      c++;
  }
 }
 printf(" a count : %d",c);
}