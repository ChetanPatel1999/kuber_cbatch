#include <stdio.h>
#include <string.h>
struct pen
{
    char cname[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;
    printf("size of p1 : %d\n",sizeof(p1));
    strcpy(p1.cname,"cello");
    p1.price=5;
    p1.rating=3.5;
    strcpy(p2.cname,"goldex");
    p2.price=10;
    p2.rating=4.5;
    printf("pen info : \n");
    printf("pen name : %s\n",p1.cname);
    printf("pen price : %d\n",p1.price);
    printf("pen rating : %.1f\n",p1.rating);
     printf("pen info : \n");
    printf("pen name : %s\n",p2.cname);
    printf("pen price : %d\n",p2.price);
    printf("pen rating : %.1f\n",p2.rating);
}