#include<stdio.h>
int celcius();
void main()
{
//int res =celcius();
printf("F is:%d",celcius());
}
celcius()
{
  int F,C;
  printf("Enter C :");
  scanf("%d",&C);
  F=(C*9/5)+32;
  return F;
  
  
}