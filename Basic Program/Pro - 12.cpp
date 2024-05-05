// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
main()
{
	int student,apple;
	
	printf("Enter no. of student :",student);
	scanf("%d",&student);
	
	apple = 5 * student;
	printf("required apples are :%d",apple);
}
