// Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int a,b;
	printf("enter no. 1 : ",a);
	scanf("%d",&a);
	
	printf("enter no. 2 : ",b);
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("they are equal");
	}else{
		printf("they are not equal");
	}
}
