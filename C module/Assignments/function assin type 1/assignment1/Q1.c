#include<stdio.h>
int addition() ;//declaration
void main(){
int add=addition() ;
	printf("Adition is =%d ",add);
	
}

addition() {	
	int a,b,c,sum;
	printf("Enter a =");
	scanf("%d",&a);
	printf("Enter b =");
	scanf("%d",&b);
	printf("Enter c =");
	scanf("%d",&c);
	
	sum=a+b+c;
//	printf("Adition is =%d",sum);
	return sum;
}
