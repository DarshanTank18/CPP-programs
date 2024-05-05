// .Calculate compound interest

#include<stdio.h>
main(){
	float p,r,time,amount,ci;
	
	printf("Enter amount : ");
	scanf("%f",&p);
	
	printf("Enter rate of interest :");
	scanf("%f",&r);
	
	printf("Enter time :");
	scanf("%f",&time);
	
	r = r / 100;
	amount = p*(1+r);
	ci = amount - p;
	
	printf("ci : %.2f",ci);
}
