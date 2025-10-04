void main()
{
	int a=10;
	int* ptr=&a;
	*ptr=45;
	printf("address of a is :%d",&a);
	printf("\nvalue at address is :%u",*ptr);
}