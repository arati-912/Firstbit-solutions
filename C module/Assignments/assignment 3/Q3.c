#include<stdio.h>
int main(){
	int a, b,sum = 1;
	printf("Enter start and end of the range: ");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		sum =sum+1;
	}
	printf("sum = %d",sum);
	return 0;
	
}