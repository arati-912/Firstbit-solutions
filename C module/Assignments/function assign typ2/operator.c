#include<stdio.h>
int operation();
void main(){
//printf("\noperation is= %d",opration()); 
//}
//int opration()
//{
	int a,b;
	char operator;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter (+,-,/,*,%):");
	scanf("%c",&operator);
	printf("operator %c",operator);
	if(operator=='+'){
		printf("Addition %d",a+b);
	}
	else if(operator=='*'){
		printf("Multiplication %d",a*b);
	}
	else if(operator=='-'){
		printf("Subtraction %d",a-b);
	}
	else if(operator=='/'){
		printf("Division %d",a/b);
//		return 1;
	}
	}
