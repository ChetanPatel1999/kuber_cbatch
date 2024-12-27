// wap to print reverse string of given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    int i;
    printf("enter string : ");
    gets(ch); // chetan
    printf("string : %s\n", ch);
    printf("reverse string : ");
    int last_index=strlen(ch) - 1;
    for (i = last_index; i >= 0; i--) // 0
    {
        printf("%c", ch[i]);
    }
}