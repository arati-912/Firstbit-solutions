#include<stdio.h>
int add(int*,int*);
int sub(int*,int*);
int mul(int*,int*);
int div(int*,int*);
void main(){
	int a=10,b=20;
	add(&a,&b);
	sub(&a,&b);
	mul(&a,&b);
	div(&a,&b);
	
}
int add(int* a,int* b){
	int c=*a+*b;
	printf("Add is %d",c);
}
int sub(int* a,int* b){
	int c=*a+*b;
	printf("\nsub is %d",c);
}
int mul(int* a,int* b){
	int c=*a+*b;
	printf("\nmul is %d",c);
}
int div(int* a,int* b){
	int c=*a+*b;
	printf("\ndiv is %d",c);
}