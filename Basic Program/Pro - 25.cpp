// Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	float exp1,exp2,exp3,exp4,exp5,ave;
	
	printf("enter expense 1 : ",exp1);
	scanf("%f",&exp1);
	
	printf("enter expense 2 : ",exp2);
	scanf("%f",&exp2);
	
	printf("enter expense 3 : ",exp3);
	scanf("%f",&exp3);
	
	printf("enter expense 4 : ",exp4);
	scanf("%f",&exp4);
	
	printf("enter expense 5 : ",exp5);
	scanf("%f",&exp5);
	
	ave = (exp1 + exp2 + exp3 + exp4 + exp5) / 5;
	printf("average expense is :%.2f",ave);
}
