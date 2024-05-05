// WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int a;
	
	printf("enter whether : ");
	scanf("%d",&a);
	
	if(a > 0){
		printf("positive whether.");
	}else if(a < 0){
		printf("negative whether.");
	}else{
		printf("whether is zero.");
	}
}
