#include<stdio.h>
float percentage();
void main()
{
	printf("percentage is:%f",percentage());
}
float percentage()
{
	float mth,phy,eng,mar,bio,given_marks,total;
	float per;
	printf("Mth :");
	scanf("%f",&mth);
	printf("phy :");
	scanf("%f",&phy);
	printf("eng :");
	scanf("%f",&eng);
	printf("mar :");
	scanf("%f",&mar);
	printf("bio :");
	scanf("%f",&bio);
	printf("total is :");
	scanf("%f",&total);
	given_marks=mth+phy+eng+mar+bio;
	per=given_marks/total*100;
//	printf("percentage  : %f",per);
    return per;

	
	
}