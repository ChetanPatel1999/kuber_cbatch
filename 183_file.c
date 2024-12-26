// fgetc()// read single from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("183_file.c", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==-1)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}