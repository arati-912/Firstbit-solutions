#include<stdio.h>
void squreqube() ;//declaration
void main()
{

    squreqube();//call
	
}//main end here
squreqube()
{
	int squre ,n1,n2,qube;
	printf("n1 = ");
	scanf("%d",&n1);
	printf("n2 = ");
	scanf("%d",&n2);
	squre=n1*n1;
	qube=n2*n2*n2;
	printf("squre = %d \nqube=%d",squre,qube);
}
