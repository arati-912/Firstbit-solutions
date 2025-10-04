#include<stdio.h>
void add(int,int);
void main(){
	int a,b, c;
	printf("Enter a, b:\n");
	scanf("%d%d",&a,&b);
     add(a,b);
}
void add(int a, int b )
{
	int c=a+b;
	printf("Add is:%d",c);
}