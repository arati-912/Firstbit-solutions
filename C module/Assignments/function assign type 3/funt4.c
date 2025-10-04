#include<stdio.h>
int main(){
//	float a, b;
	int a,b;
	char ch;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter an operator (+,-,/,*,%):");
	scanf(" %c",&ch);
	printf("res is %d:",arithmatic(a,b,ch));
}
int arithmatic(int a,int b,char ch){

	
	if(ch=='+')
       return a+b;
    	else if(ch=='-')
          return a-b;
	        else if(ch=='/')
             return a/b;
	           else if(ch=='*')
                 return a*b;
	        	
}       
    	 
	
