// strrev() := its convert string in reverse order
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch);
    printf("string : %s\n", ch);
    strrev(ch);
    printf("reverse string : %s\n", ch);
}