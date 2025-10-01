#include<stdio.h>
void area();//declaration
void main(){
	area();//call
	area();
	area();
	area();
	
}//main end here
area()
{
	float pi ,r,area;
	pi=3.14f;
	printf("\nEnter radius=");
    scanf("\n%f",&r);
	area=pi*r*r;
	printf("Area of a circle is = %f",area);
}