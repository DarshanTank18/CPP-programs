// Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter first no : ",a);
	scanf("%d",&a);
	
	printf("Enter second no : ",b);
	scanf("%d",&b);
	
	a+=b;
	
	printf("\naddition of a+b is :%d",a);
	printf("\nsize of value is :%d",sizeof(a));
}
