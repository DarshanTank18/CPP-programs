//Calculate compound interest

#include<stdio.h>
#include<math.h>

main(){
	float P,R,time,amount,ci;
	
	printf("Enter amount :",P);
	scanf("%f",&P);
	
	printf("Enter rate of interest :",R);
	scanf("%f",&R);
	
	printf("Enter time period :",time);
	scanf("%f",&time);
	
	amount = P * pow(1 + R/100, time);
	printf("\namount : %.2f",amount);
	
	ci = amount - P;
	printf("\nthe compount intrest : %.2f " ,ci);
}
