#include<stdio.h>/
void swap() ; //declaration
void main()
{
	swap() ; //call
	swap() ;

	}//main end here
	
	swap()//defination
	{
	int a ,b ,tem;
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
//a=b;
    printf("\na is   :%d",a);
    tem=a;
    printf("\ntem is :%d",tem);
    b=tem;
    printf("\nb is   :%d",b);
}//swap function end here