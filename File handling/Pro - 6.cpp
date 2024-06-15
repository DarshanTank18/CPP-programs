// Pro - 6
#include<stdio.h>
main(){
	FILE * fl;
	fl = fopen("Pro - 6.txt","w");
	
	char nm[50];
	int i,n,m1,m2,m3,total;
	float pr;
	
	printf("Enter numbers of student : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	printf("Enter name : ");
	scanf("%s",&nm);
	
	printf("Enter first subject mark: ");
	scanf("%d",&m1);
	
	printf("Enter second subject mark: ");
	scanf("%d",&m2);
	
	printf("Enter third subject mark: ");
	scanf("%d",&m3);
	
	printf("---------------------\n");
	printf(" Name : %s",nm);
	printf("\n Mark 1 : %d",m1);
	printf("\n Mark 2 : %d",m2);
	printf("\n Mark 3 : %d\n",m3);
	total = m1 + m2 + m3;
	printf("\n Total : %d",total);
	pr = total / 3;
	printf("\n Pr. : %.2f",pr);
	if(pr > 33){
		printf("\n Pass..");
	}else{
		printf("\n Fail..");
	}
	printf("\n---------------------\n");
	
	fprintf(fl,"\n---------------------\n");
	fprintf(fl," Name : %s",nm);
	fprintf(fl,"\n Mark 1 : %d",m1);
	fprintf(fl,"\n Mark 2 : %d",m2);
	fprintf(fl,"\n Mark 2 : %d\n",m2);
	fprintf(fl,"\n Total : %d",total);
	fprintf(fl,"\n Pr. : %.2f",pr);
	if(pr > 33){
		fprintf(fl,"\n Pass..");
	}else{
		fprintf(fl,"\n Fail..");
	}
	}
}
