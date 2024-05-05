//Write a program in C to calculate and print the electricity bill

#include<stdio.h>
main(){
	int unit,id;
	float cha,cou;
	char name[20];
	
	printf("Enter id : ",id);
	scanf("%d",&id);
	
	printf("Enter name : ",name);
	scanf("%s",&name);
	
	printf("Enter electricity bill : ",unit);
	scanf("%d",&unit);
	
	if(unit < 350){
		cha = 1.20;
	}else if(unit >= 350 && unit < 600){
		cha = 1.50;
	}else if(unit >= 600 && unit < 800){
		cha = 1.80;
	}else{
		cha = 2.00;
	}
	
	cou = unit * cha;
	
	printf("\nYour id :%d",id);
	printf("\nYour name :%s",name);
	printf("\nYour bill :%.2f",cou); 
}
