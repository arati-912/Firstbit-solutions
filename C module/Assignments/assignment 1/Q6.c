#include<stdio.h>
void main(){
	float da,ta,hra,bs;
    bs=66000;
	if(bs>=5000)
{
	da=bs*0.10;
	ta=bs*0.15;
	hra=bs*0.20;
	printf("da=%f \nta=%f \nhra=% f",da,ta,hra);
}
else{
	da=bs*0.15;
	ta=bs*0.25;
	hra=bs*0.30;
	printf("da=%f ta=%f hra=%f",da,ta,hra);
}
}