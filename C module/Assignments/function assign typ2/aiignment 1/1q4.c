#include<stdio.h>
char charecter();
void main()
{
printf("\naski = %d",charecter()); 
 
    
}
char charecter()	
{

	char ch;
	printf("Enter a charecter : ");
	scanf("%c",&ch);
	if(ch>='a'||ch>='e'||ch>='i'||ch>='o'||ch>='u'||
	ch>='A'||ch>='E'||ch>='I'||ch>='O'||ch>='U')
	{
		printf("is a charecter");
	}
	else{
		printf("not a charecter");
		
	}
	return ch;
}