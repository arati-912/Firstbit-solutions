#include<stdio.h>
void average() ;//declaration
void main()
{
	average();//call
	average();
	average();
}//main end here
   average()
{
	int a,b,c,d,e,avg;
	printf("\nEnter values :");
	scanf("\n%d \n%d \n%d \n%d \n%d",&a,&b,&c,&d,&e);
	avg=a+b+c+d+e/5;
	printf("Average is =%d",avg);
	return 0;
}