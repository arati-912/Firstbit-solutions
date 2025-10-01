#include<stdio.h>
int evenodd();
void main(){
	int res=evenodd();
	if(res==1)
		printf("is even");
	else
		printf("is odd");
}
int evenodd()
{
int no;
printf("Enter a number:");
scanf("%d",&no);
if(no%2==0)
    return 1;
//	printf("is even");
else
    return 2;
//	printf("is odd");	
}