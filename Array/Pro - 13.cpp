// WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
main(){
	int n[50],i;
	
	printf("Enter 5 numbers : ");
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	
	printf("\nodd and even : \n");
	for(i=0;i<5;i++){
		if(n[i]%2==0){
			printf("\n%d is even",n[i]);
		}
		else{
			printf("\n%d is odd",n[i]);
		}
	}
}
