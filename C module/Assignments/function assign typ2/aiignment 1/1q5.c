#include<stdio.h>
int VoteOrNot();
void main()
{
int age =VoteOrNot();
    if(age>=1)
		printf("Eligible for vote :");
	else
		printf("not Eligible for vote :");	
}
    int VoteOrNot()
    {
    	int age=19;
    	if(age>=18) 
		return 1;
	else
		return 0;
}