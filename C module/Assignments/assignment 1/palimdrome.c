#include<stdio.h>
void main(){
	int no;
	printf("Enter 6 digit numebr :");
	scanf("%d",&no);
	int r1,r2,r3,r4,r5,r6,tem,rev;
	r1=no%10;
	    printf("r1 is = %d",r1);
	tem=no/10;
    	printf("\ntem1 is = %d",tem);
	r2=tem%10;
    	printf("\nr2 is  = %d",r2);
	tem=tem/10;
    	printf("\ntem2 is = %d",tem);
	r3=tem%10;
     	printf("\nr3 is = %d",r3);
	tem=tem/10;
        printf("\ntem is = %d",tem);
    r4=tem%10;
        printf("\nr4 is = %d",r4);

    tem=tem/10;
        printf("\ntem is = %d",tem);

    r5=tem%10;
        printf("\nr5 is = %d",r5);

    tem=tem/10;
        printf("\nrtem is = %d",tem);

    r6=tem%10;
        printf("\nr6 is = %d",r6);

    
	rev=r1*100000+r2*10000+r3*1000+r4*100+r5*10+r6;
	printf("\nrev is =%d",rev);
	if(no==rev){
		printf("\nis palimdrome");
	}
	else{
		printf("\nnot palimdrome");
	}
	
}