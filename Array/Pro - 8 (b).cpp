// Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage
#include<stdio.h>
int n,i;
struct empdata{
	char empnm[50];
	int empno[20];
	int empage[20];
}da[5];
main(){
	printf("Enter employe details :",i+1);
	
	for(i=0;i<5;i++){
	printf("\nName:");
	scanf("%s",&da[i].empnm);
	printf("Age:");
	scanf("%d",&da[i].empage);
	printf("Number:");
	scanf("%d",&da[i].empno);
}
printf("\n");

printf("\nEmployee details:-");
    for(i=0;i<5;i++){
    printf("\nEmployee %d:\n",i+1);
    printf("Name:%s\n",da[i].empnm);
	printf("Age:%d\n",da[i].empage);
	printf("Number:%d\n",da[i].empno);
}
printf("\n");
}
