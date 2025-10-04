int evenOrOdd(int);
void main(){
	
	int no;
	printf("Enter a no:");
	scanf("%d",&no);
//	evenOrOdd(no);
	if(evenOrOdd(no)==1)
	    printf("even");
	    else
	    printf("odd");
}
int evenOrOdd(int no){
	if(no%2==0)
	    return 1;
     else
     return 0;

}