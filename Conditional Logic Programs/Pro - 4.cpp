// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
main()
{
	int a,b,choice;
	
	printf("enter no. :",a);
	scanf("%d",&a);
	printf("enter no. :",b);
	scanf("%d",&b);
	printf("1=add, 2=sub, 3=mul, 4=div");
	printf("\nenter value :",choice);
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("add :%d",a+b);
	}else if (choice==2){
		printf("sub :%d",a-b);
	}else if(choice==3){
		printf("mul :%d",a*b);
	}else if(choice==4){
		printf("div :%d",a/b);
	}else{
		printf("enter valid no.");
	}	
}
