#include<stdio.h>
void hrsintomin() ;//declaration
void main()
{
	hrsintomin() ;
	hrsintomin() ;
	hrsintomin() ;
		
}
   hrsintomin(){

   int hrs,min,rmin;
   printf("\nenter minute : ");
   scanf("%d",&min);
//   min=556;
   //formula =  hours= minute / num of min in hours;
   hrs=min/60;
   rmin=min%60;
   printf("Hours is :  %d:%d",hrs,min);

}