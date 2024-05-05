// Accept the input month number and print number of days in that month.

#include<stdio.h>
main(){
	int nom;
	
	printf("Enter month number (1-12): ");
	scanf("%d",&nom);
	
	if(nom == 1){
		printf("january \n 31 days\n");
	}else if(nom == 2){
		printf("February\n common years - 28 days \n leap years - 29 days");
	}else if(nom == 3){
		printf("March \n 31 days");
	}else if(nom == 4){
		printf("April \n 30 days");
	}else if(nom == 5){
		printf("May \n 31 days");
	}else if(nom == 6){
		printf("June \n 30 days");
	}else if(nom == 7){
		printf("July \n 31 days");
	}else if(nom == 8){
		printf("August \n 31 days");
	}else if(nom == 9){
		printf("September \n 30 days");
	}else if(nom == 10){
		printf("October \n 31 days");
	}else if(nom == 11){
		printf("November \n 30 days");
	}else if(nom == 12){
		printf("December \n 31 days");
	}else{
		printf("Invalid month number. \nPlease try again....\n");
	}
}
