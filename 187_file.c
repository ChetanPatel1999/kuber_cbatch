//fputs():-write one line in file
#include<stdio.h>
void main()
{
 FILE *ptr;
 ptr=fopen("ram.txt","w");
 fputs("hi i am chetan",ptr);
 fclose(ptr);
}