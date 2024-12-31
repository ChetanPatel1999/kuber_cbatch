#include <stdio.h>
#include <string.h>
struct pen
{
    char cname[20];
    int price;
    float rating;
};
void above_5(struct pen p[],int size)
{
    int i;
    printf("above 5 price pens name \n");
    for (i = 0; i < size; i++)
    {
        if (p[i].price < 5)
        {
            printf("pen name : %s\n", p[i].cname);
        }
    }
}
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter pen name : ");
        scanf("%s", p[i].cname);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("pen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].cname);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
    }
    above_5(p,3);
}