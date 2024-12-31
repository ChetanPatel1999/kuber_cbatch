#include <stdio.h>
#include <string.h>
union pen
{
    char cname[12]; // data member
    int price;
    float rating;
};
void main()
{
    union pen p1, p2, p3;
    printf("size of union p1 : %d\n", sizeof(p1));
    printf("enter pen1 info : \n");
    printf("enter pen name : ");
    scanf("%s", p1.cname);
    printf("enter pen rating : ");
    scanf("%f", &p1.rating);
    printf("enter pen price : ");
    scanf("%d", &p1.price);

    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.cname);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);
}