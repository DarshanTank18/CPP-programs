// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>
main(){
	float n1,n2,n3;
	
	printf("Enter first no: ",n1);
	scanf("%f",&n1);
	
	printf("Enter second no: ",n2);
	scanf("%f",&n2);
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("swapping : ");
	printf("\nfirst no: %.2f",n1);
	printf("\nsecond no: %.2f",n2);
}
