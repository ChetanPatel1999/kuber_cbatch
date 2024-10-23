#include <stdio.h>
void main()
{
    int age,num;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("welcome to the clube \n");
        printf("clube menu :\n");
        printf("1. pasta : 120\n");
        printf("2. noodles : 100\n");
        printf("3. red bool : 180\n");
        printf("please enter number for order : ");
        scanf("%d",&num);//45
        if(num==1)
        {
          printf("your pasta is ordered please pay 120 rs ");  
        }
        else if(num==2)
        {
            printf("your noodles is ordered please pay 100 rs ");
        }
        else if (num==3)
        {
            printf("your red bool is ordered please pay 180 rs ");
        }
        else{
            printf("please eneter 1 ,2 or 3");
        }
    }
    else
    {
        printf("you can not enter inside clube try after %d year", 18 - age);
    }
}