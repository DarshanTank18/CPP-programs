// Convert years into days and months

#include<stdio.h>
main()
{
	float nyear,days,months;
	
	printf("Enter no. of year: ");
	scanf("%f", &nyear);
	
	days = nyear*365;
	months = nyear*12;
	
	printf("\n month(s) :%.2f",months);
	printf("\n day(s) :%.2f",days);
}
