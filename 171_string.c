// strlwr() := its convert string in lower case later
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch);
    printf("string : %s\n", ch);
    strlwr(ch);
    printf("uper string : %s\n", ch);
}