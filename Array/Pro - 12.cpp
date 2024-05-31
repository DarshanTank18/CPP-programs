// WAP to accept 5 students name and store it in array.
#include<stdio.h>
#include<string.h>
main(){
	int i;
	char name[5][50];
	
	printf("Enter 5 students name : \n");
	
	for(i=0;i<5;i++){
		printf("Enter name %d: ",i+1);
		scanf("%s",&name[i]);
	}
	
	printf("\nNames of 5 students : ");
	for(i=0;i<5;i++){
		printf("\n%s",name[i]);
		
	}
}
