// Accept month number and display month name.

#include<stdio.h>
main(){
	int nom;
	
	printf("Enter month number (1-12): ");
	scanf("%d",&nom);
	
	if(nom == 1){
		printf("january \n");
	}else if(nom == 2){
		printf("February \n");
	}else if(nom == 3){
		printf("March \n");
	}else if(nom == 4){
		printf("April \n");
	}else if(nom == 5){
		printf("May \n");
	}else if(nom == 6){
		printf("June \n");
	}else if(nom == 7){
		printf("July \n");
	}else if(nom == 8){
		printf("August \n");
	}else if(nom == 9){
		printf("September \n");
	}else if(nom == 10){
		printf("October \n");
	}else if(nom == 11){
		printf("November \n");
	}else if(nom == 12){
		printf("December \n");
	}else{
		printf("Invalid month number. \nPlease try again....\n");
	}
}
