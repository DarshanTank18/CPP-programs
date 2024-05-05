//WAP to Find Area And Circumference of Circle

#include<stdio.h>

float pi=3.14;
main()
{
	float r,area,cir;
	printf("enter value of r :",r);
	scanf("%f",&r);
	area=pi*r*r;
	cir=2*pi*r;
	printf("area of circle is :%2f",area);
	printf("\n Circumference of circle is :%.2f",cir);
}
