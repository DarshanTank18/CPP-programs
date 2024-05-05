//Accept marks from user and check pass or fail

#include<stdio.h>
main(){
	int marks;
	
	printf("Enter your marks :");
	scanf("%d",&marks);
	
	if(marks >= 33)
	{
		printf("passed");
	}else{
		printf("failed");
	}
}
