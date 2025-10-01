#include<stdio.h>
void farenite();//declaration
void main(){
farenite();
farenite();//call
farenite();
}//main end here
farenite()
{
	int F,C;
	printf("\nEnter cencius =");
	scanf("%d",&C);
	F=(C*9/5)+32;
	printf("Farenite is = %d",F);
}