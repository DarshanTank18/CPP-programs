// WAP to find factorial using recursion
#include<stdio.h>
int data(int n)
{
	if(n<=1)
	return 1;
	else
	return n*data(n-1);
}
int main()
{
	int n,f;
	printf("Enter any number: ");
	scanf("%d",&n);
	f = data(n);
	printf("factorial is %d",f);
data(n);
}
