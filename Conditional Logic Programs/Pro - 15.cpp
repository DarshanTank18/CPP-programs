// Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=14 

#include<stdio.h>
main()
{
	int math,phy,chem,total;
	
	printf("Enter math mark :",math);
	scanf("%d",&math);
	
	printf("Enter physics mark :",phy);
	scanf("%d",&phy);
	
	printf("Enter chemistry mark :",chem);
	scanf("%d",&chem);
	
	total = math + phy + chem;
	
	printf("Total : %d",total);
	printf("\nmath + physics : %d",math + phy);
	
	if(math >= 65 && phy >= 55 && chem >= 50 && total >= 190){
		printf("\nThe candidate is eligible.");
	}else if(math + phy >= 140){
		printf("\nThe candidate is eligible.");
	}else{
		printf("\nThe candidate is not eligible.");
	}
}
