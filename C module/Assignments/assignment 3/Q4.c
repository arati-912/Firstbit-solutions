#include<stdio.h>
void main(){
	int i,n,count=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
	}
	}
		if(count==2)
		 printf("prime");
		
		else
			printf("not prime");
			
	}
	
