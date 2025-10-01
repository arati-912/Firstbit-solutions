#include<stdio.h>
void main(){
//	float a, b;
	int a,b;
	char operator;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter an operator (+,-,/,*,%):");
	scanf(" %c",&operator);
	if(operator=='+'){
	     printf("Addition is =%d",a+b);
	}
	else{
		if(operator=='-'){
			printf("Subtraction is = %d",a-b);
		}
	    else{
		    if(operator=='/'){
			  printf("Division is = %d",a/b);
		    }
	        else{
		        if(operator=='*'){
			        printf("Multiplycation is = %d",a*b);
	        	}
//             	else{
//	            	if(operator=='%'){
//		           	    printf("Mode is = %d",a%b);
//		            }
//              	}
	        }       
    	} 
	}
}