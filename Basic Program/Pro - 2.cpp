//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
main()
{
	int a,b;
	float ans;
	
	printf("enter any 2 value :",a,b);
	
	scanf("%d%d",&a,&b);
	
	printf("addition :%d",a+b);
	printf("\nsubtraction :%d",a-b);
	printf("\nmultiplication :%d",a*b);
	
	ans = float(a)/float(b);
	printf("\ndivision :%f",ans);
	printf("\nmodulo :%d",a%b);
}
