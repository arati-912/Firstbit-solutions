#include<stdio.h>
void main(){
	int price=700,fprice,student;
//	char 'Y',N;
	printf("You are a student Y/N :");
//	scanf("%c",&student);
//	printf("your price :");
//	scanf("%d",&price);

	if(student=='Y'){
		if(price>500){
		fprice = price-price*0.20;
		printf("Final price=%d",fprice);
		}
		else{
			fprice= price-price*0.10;
		}
	}
	else{
		if(price>600){
			fprice = price-price*0.15;
		}
		
				
			}	
      }
	
	
