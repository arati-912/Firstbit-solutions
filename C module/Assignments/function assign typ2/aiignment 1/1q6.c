#include<stdio.h>
int vovelornot();
void main(){
	vovelornot();
	if(vovelornot()==1){
			printf("it is uppercase");
	}
	else if(vovelornot()==0){
		printf("it is symbole");
	}
	else{
		printf("it is lower");
	}
	 
}
int vovelornot(){
	char ch='a';
	if(ch>65){
//		printf("it is uppercase");
     return 1;

	}
	else if(ch<65){
//		printf("it is symbole");
    return 0;
	}
	else{
		printf("it is lower");
	}
}