// Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float C,F;
	
	printf("Enter temp. fahrenheit : ",F);
	scanf("%f",&F);
	
	C = (F-32)*5/9;
	printf("Enter temp. Celsius : %f",C);	
}
