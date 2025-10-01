#include<stdio.h>
float area();
void main()
{
float res=area();
printf("\nres is :%f",res);
}
float area()
{
	float area,pi,radius;
//	area=pi*radius*radius
    pi=3.14f;
    radius=10;
    area=pi*radius*radius;
    printf("area of circle is = %f",area);
    return area;
}