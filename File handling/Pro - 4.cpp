// Pro - 4
#include<stdio.h>
main(){
	FILE * fl;
	fl = fopen("Pro - 4.txt","a");
	
	char nm[20];
	int id;
	
	printf("Enter Id : ");
	scanf("%d",&id);
	printf("Enter name : ");
	scanf("%s",&nm);
	
	printf("\nId : %d",id);
	printf("\nName : %s",nm);
	
	fprintf(fl,"ID : %d",id);
	fprintf(fl,"\nName : %s",nm);
	
	fclose(fl);
}
