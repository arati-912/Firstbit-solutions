int leap();
void main(){
	int leap();
	if(leap()==1)
		printf("year is leap ");
	else
		printf("not leap");
}
leap(){
	int year=2001;
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
