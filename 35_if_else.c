//wap to check given alphabet is vovel or consonant.
#include<stdio.h>
void main()
{
  char alpha;
  printf("enter a alphabet : ");
  scanf("%c",&alpha);
  if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
  {
    printf("yes its vovel");
  }
  else{
    printf("its consonant");
  }
}
