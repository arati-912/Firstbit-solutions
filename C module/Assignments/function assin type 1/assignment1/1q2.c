#include<stdio.h>
void palimdrom() ;//declaration
void main(){
	
	
	palimdrom();
	
}
palimdrom()
{
	int no=151;
	int n1,n2,n3,rev;
	n1=no%10;
	rev=no/10;
	n2=rev%10;
	n3=rev/10;
	rev=n1*100+n2*10+n3;
	printf("rev =%d",rev);
	if(no==rev)
	{
		printf("\npalimdrome");
	}
	else{
		printf("\nnot plimdrome");
	}
}