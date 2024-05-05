//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int N;
	
	printf("Enter value : ",N);
	scanf("%d",&N);
	
	printf("\n N^1 :%d",N);
	printf("\n N^2 :%d",N*N);
	printf("\n N^3 :%d",N*N*N);
}
