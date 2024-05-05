// WAP to find number is even or odd using ternary operator

#include<stdio.h>
main(){
	int nm;
	
	printf("enter number : ");
	scanf("%d",&nm);
	
	if(nm % 2 == 0){
		printf("No. is even");
	}else{
		printf("No. is odd");
	}
}
