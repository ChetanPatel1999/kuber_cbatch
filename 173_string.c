// strcpy() := its copy string in another variable
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string : ");
    gets(ch1); // chetan
    printf("string ch1 : %s\n", ch1);
    printf("string ch2 : %s\n", ch2);
    //strcpy(ch2, ch1);
    strcpy(ch2, "ram");
    printf("string ch1 : %s\n", ch1);
    printf("string ch2 : %s\n", ch2);
}