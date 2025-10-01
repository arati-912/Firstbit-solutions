#include<stdio.h>
int average();
void main(){
printf("Average is:%d",average());
}
int average()
{
int n1,n2,n3,avg;
printf("Enter three number :\n");
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
avg=n1+n2+n3/3;
return avg;


}