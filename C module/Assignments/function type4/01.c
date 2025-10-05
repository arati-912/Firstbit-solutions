void main(){
	int a,b;
	printf("Enter A nd B:\n");
	scanf("%d%d",&a,&b);
	
	printf("\nAdd is =%d",add(a,b));
	printf("\nsub is =%d",sub(a,b));
	printf("\nmul is =%d",mul(a,b));
	printf("\ndiv is =%d",div(a,b));
	
}
int	add(int a,int b)
{
		return a+b;
	}
int	sub(int a,int b)
{
		return a-b;
	}
int	mul(int a,int b)
{
		return a*b;
	}
int	div(int a,int b)
{
		return a/b;
	}