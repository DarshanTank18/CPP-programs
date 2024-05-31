// WAP to accept 5 numbers from user and display in reverse order using for loop and array.
#include<stdio.h>
main(){
	int i,n[5];
	
	for (i=1;i<=5;i++){
	    printf("Enter no. : ");
	    scanf("%d",&n[i]);
	}
	for (i=5;i>=1;i--){
	    printf("\nReverse no. :%d",n[i]);
	}
}
