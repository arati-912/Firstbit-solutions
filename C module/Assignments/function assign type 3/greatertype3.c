void main(){
	printf("\ngreater no is:%d",greater());
}
int greater()

{
	int a,b,c;
	printf("Enter A number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b||a>c){
		printf("a is greater ");
		return a;
	}
	else{
		if(b>c){
			printf("b is greater ");
			return b;
		}
		else{
			printf("c is greater ");
			return c;
		}
	}
}