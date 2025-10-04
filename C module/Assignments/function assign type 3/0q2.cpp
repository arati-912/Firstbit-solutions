#include<stdio.h>
void area(int ,int );
void periOfreact(int,int);
int main(){
	int len ,bre;
	printf("Enter len, bre:\n");
	scanf("%d%d",&len,&bre);
	area(len,bre);
	periOfreact(len,bre);
	}
void area(int len,int bre)
{
		int area=len*bre;
		printf("area is=%d",area);
//		return 0;
	}
void periOfreact(int len,int bre)
	{
		int peri=2*(len*bre);
	printf("perimeter is :%d",peri);
//	return 0;

	}
	
	
	
	
	
	
	
	
	
	