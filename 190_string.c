// wap to convert string in upper case string.
#include <stdio.h>
void upper(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}
void main()
{
    char ch[50];
    int i;
    printf("enter string : ");
    gets(ch); // Chetan
    printf("string : %s\n", ch);
    upper(ch);
    printf("string : %s\n", ch);
}