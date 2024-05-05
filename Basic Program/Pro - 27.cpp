// Convert days into months

#include<stdio.h>
main()
{
	int ndays;
	float month;
	
	printf("Enter no. of days :",ndays);
	scanf("%d",&ndays);
	
	month = ndays/30;
	printf("Month(s) :%.2f",month);
}
