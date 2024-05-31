// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main(){
	int a,b,n;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("\n1 = Addition ");
	printf("\n2 = Subtraction ");
	printf("\n3 = Multiplication ");
	printf("\n4 = Division ");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&n);
	
	switch(n)
    {
    case 1:
        printf("Addition of %d and %d is : %d",a,b,a+b);
        break;
    case 2:
        printf("Subtraction of %d and %d is : %d",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and is %d : %d",a,b,a/b);
        break;
    default:
        printf("\nEnter Your Correct Choice.");
        break;
    }
}
