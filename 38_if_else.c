//wap to take three  subject marks and calualte percantage ,show result pass and fail.
#include<stdio.h>
void main()
{
  int hindi,english,math;
  float per;
  printf("enter hindi marks : ");
  scanf("%d",&hindi);
  printf("enter english marks : ");
  scanf("%d",&english);
  printf("enter math marks : ");
  scanf("%d",&math);
  per=((hindi + english + math)/300.0)*100;
  if(per>33)
  {
    printf("student is pass with %.2f percent",per);
  }
  else
  {
    printf("student is fail becase its  %.2f percent",per);
  }
}