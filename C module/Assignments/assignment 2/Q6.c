#include<stdio.h>
void main(){
	int num=7;

	if(num%3==0 && num%5==0)
		printf("number divisible by both");
	
    	else if(num%3==0 && num%5!=0)
			printf("number dividible by 3 not by 5");
	        else if(num%3!=0 && num%5==0)
			    printf("number dividible by 5 not by 3");
                 else
                 printf("nothing");
		
}