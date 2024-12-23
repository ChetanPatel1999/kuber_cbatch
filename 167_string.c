#include<stdio.h>
void main()
{
 char ch[50];
 int i,c=0;
 printf("enter a string :");
 gets(ch);//chetan
 printf("string : %s\n",ch);
 printf("vovel in string : ");
 for(i=0;ch[i]!='\0';i++)
 {
  if(ch[i]=='a'|| ch[i]=='i'|| ch[i]=='e'|| ch[i]=='o'|| ch[i]=='u')
  {
      printf("%c ",ch[i]);
      c++;
  }
 }
 printf("\nvovle count : %d",c);
}