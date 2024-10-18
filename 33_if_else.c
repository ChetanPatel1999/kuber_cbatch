// wap to check voter eligibility.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);//15
    if (age >= 18)
    {
        printf("eligible for voting");
    }
    else
    {
        printf("not eligible for voting");
    }
}