#include<stdio.h>
int main()
{
	char ch;
    printf("Enter Char = ");
    scanf("%c",&ch);
    if(vowel(ch)==1)
	{
    	printf("vovel");
	}
	else{
		printf("consonant");
	}
}
 int vowel(char ch)
   {
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	    return 1;
	else
		return 0;

//	return 0;
}