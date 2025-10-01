#include<stdio.h>
void main(){
	char ch='A';
	printf("Enter charecter :%c");
	scanf("%c",&ch);
	if(ch<=90){
		printf("Upper case");
	}
	else{
		printf("Lower case");
		
	}
	printf("\nAski valu of charecter is =%d",ch);
}