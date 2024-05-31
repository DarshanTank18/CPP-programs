// information -print and display empno, empname, address andage
#include<stdio.h>
main(){
	char emp_nm[5][50];
	int emp_no[20],emp_age[20],n,i;
	
	printf("Enter number of employees:");
	scanf("%d",&n);
	printf("Enter details of employee:-",i+1);
	for(i=0;i<n;i++){
	printf("\nName:");
	scanf("%s",&emp_nm[i]);
	printf("Age:");
	scanf("%d",&emp_age[i]);
	printf("Number:");
	scanf("%d",&emp_no[i]);
	}
	printf("\n");

	printf("\nEmployee details:-");
    for(i=0;i<n;i++){
    printf("\nEmployee %d:\n",i+1);
    printf("Name:%s\n",emp_nm[i]);
	printf("Age:%d\n",emp_age[i]);
	printf("Number:%d\n",emp_nm[i]);
	}
	printf("\n");
}
