// WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("enter first no. :",n1);
	scanf("%d",&n1);
	
	printf("enter second no. :",n2);
	scanf("%d",&n2);
	
	printf("enter third no. :",n3);
	scanf("%d",&n3);
	
	if(n1 < n2 && n1 < n3){
		printf("first no. is minimum.");
	}else if(n2 < n3 && n2 < n1){
		printf("second no. is minimum.");
	}else{
		printf("third no. is minimum.");
	}
}
