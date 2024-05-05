// Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	float nmin,sec,hours;
	
	printf("Enter no. of minutes: ");
	scanf("%f", &nmin);
	
	sec = nmin * 60;
	hours = nmin / 60;
	
	printf("\n Second(s) :%.2f",sec);
	printf("\n Hour(s) :%.2f",hours);
}
