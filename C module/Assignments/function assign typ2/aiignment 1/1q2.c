#include<stdio.h>
int palindrom();
void main()
{
	int rev=palindrom();
	if(rev==no)
		printf("is palimdrome");
	else
	printf("is not palimdrome");	
}
int palindrom()
{
	int no=121;
	int r1,r2,r3,rev,tem,sum;
	r1=no%10;
	tem=no/10;
	r2=tem%10;
	r3=tem/10;
	sum=r1+r2+r3;
	rev=r1*100+r3*10+r3;
	return rev;
	return no;
}