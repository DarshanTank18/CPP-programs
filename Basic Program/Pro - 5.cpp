//Find Area of Cube formula : a = 6a2

#include<stdio.h>
main()
{
	float area,side;
	
	printf("enter length of cube :");
	scanf("%f",&side);
	
	area = 6*side*side;
	
	printf("\n area of cube :%.2f",area);
}
