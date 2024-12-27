// wap to find length of string by user defined function.
#include <stdio.h>
int slength(char ch[])
{
    int i,c=0;
    for (i = 0; ch[i] != '\0'; i++) // 6
    {
        c++;
    }
    return c;
}
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // chetan
    printf("string : %s\n", ch);
    printf("length of string : %d\n", slength(ch));
    int l=slength("chetan");
    printf("length : %d",l);

}