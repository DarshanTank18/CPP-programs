// Calculate person’s insurance premium based on salary

#include<stdio.h>
main()
{
	float salary,pre;
	
	printf("enter salary : ",salary);
	scanf("%f",&salary);
	
	if (salary >= 25000)
	{
		pre = salary * 0.15;
	}else if(salary >= 50000){
		pre = salary * 0.25;
	}else if(salary >= 75000){
		pre = salary * 0.35;
	}else{
		pre = salary * 0.50;
	}
	
	printf("salary : %.2f",pre);
}
