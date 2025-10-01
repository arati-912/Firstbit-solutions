#include<stdio.h>
int addition();
void main()
{
	int	sum;
	sum=addition();
	printf("sum is :%d",sum);
}
 addition()
{
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
   return c;
}