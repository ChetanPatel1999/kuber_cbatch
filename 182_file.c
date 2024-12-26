// fgetc()// read single from file
// fputc()// write single char in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("facto.txt","r");
    ch=fgetc(ptr);
    printf("%c",ch);
    ch=fgetc(ptr);
    printf("%c",ch);
    fclose(ptr);
}