// Pro - 1
#include<stdio.h>
main(){
	FILE * fl;
	fl = fopen("Pro - 1.txt","w");
	char fnm[20],lnm[20];
	printf("Enter first name : ");
	scanf("%s",&fnm);
	printf("Enter last name : ");
	scanf("%s",&lnm);
	fprintf(fl,"First name : %s",fnm);
	fprintf(fl,"\nLast name : %s",lnm);
	fclose(fl);
}
