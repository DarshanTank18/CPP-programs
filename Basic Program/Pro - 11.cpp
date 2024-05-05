// Find circumference of square formula : C = 4 * a

#include<stdio.h>

main()
{
	float a,b,area;
	printf("enter value of a :",a);
	scanf("%f",&a);
	
	printf("enter value of b :",b);
	scanf("%f",&b);
	
	area = 2*(a+b);
	printf("\n circumference of square is :%.2f",area);
}
