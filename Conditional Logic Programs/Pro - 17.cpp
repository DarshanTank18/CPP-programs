// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main(){
	int n1,n2,n3,total;
	
	printf("Enter first value : ",n1);
	scanf("%d",&n1);
	
	printf("Enter second value : ",n2);
	scanf("%d",&n2);
	
	printf("Enter third value : ",n3);
	scanf("%d",&n3);
	
	total = n1 + n2 + n3;
	printf("\ntotal : %d",total);
	
	if(total == 180 && n1>0 && n2>0 && n3>0){
		printf("\nthis triangle is perfect.");
	}else{
		printf("\nthis triangle is not perfect.");
	}
}
