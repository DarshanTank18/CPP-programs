// Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	char id[10];
	float emp1,emp2,emp3,emp4,emp5,ave;
	
	printf("enter emp. id : ",id);
	scanf("%s",&id);
	
	printf("enter emp1 salary :",emp1);
	scanf("%f",&emp1);
	
	printf("enter emp. id : ",id);
	scanf("%s",&id);
	
	printf("enter emp2 salary :",emp2);
	scanf("%f",&emp2);
	
	printf("enter emp. id : ",id);
	scanf("%s",&id);
	
	printf("enter emp3 salary :",emp3);
	scanf("%f",&emp3);
	
	printf("enter emp. id : ",id);
	scanf("%s",&id);
	
	printf("enter emp4 salary :",emp4);
	scanf("%f",&emp4);
	
	printf("enter emp. id : ",id);
	scanf("%s",&id);
	
	printf("enter emp5 salary :",emp5);
	scanf("%f",&emp5);
		
	ave = (emp1 + emp2 + emp3 + emp4 + emp5) / 5;
	printf("average salary is :%.2f",ave);
}
