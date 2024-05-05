// WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	float nyear,year,ndays,day;
	
	printf("Enter no. of years :",nyear);
	scanf("%f",&nyear);
	
	printf("Enter no. of days :",ndays);
	scanf("%f",&ndays);
	
	year = nyear * 365;
	day = ndays / 365;
	
	printf("\n Day(s) : %.2f",year);
	printf("\n Year(s) : %.2f",day);
}
