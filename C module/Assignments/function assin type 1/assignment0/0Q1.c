#include<stdio.h>
void Add() ;//declaration
void main(){
	
	Add();//call
	Add();
	Add();
	Add();
	Add();
	
}//main end here
Add(){
     	int a,b,c;
     	printf("\nEnter a=");
    	scanf("%d",&a);
    	printf("Enter b=");
    	scanf("%d",&b);
		c=a+b;
		printf("Addition of two number is = %d",c);
}