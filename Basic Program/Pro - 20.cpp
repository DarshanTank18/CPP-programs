// Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	int msalary,ipremium,loan,sal;
	
	printf("Enter monthly salary : ",msalary);
	scanf("%d",&msalary);
	
	ipremium = msalary * 0.1;
	printf("\n insurance premium : %d",ipremium);
	
	loan = msalary * 0.1;
	printf("\n loan installment : %d",loan);
	
	sal= msalary - ipremium - loan;
	printf("\n remaining salary : %d",sal);
}
