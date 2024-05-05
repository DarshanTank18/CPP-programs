#include<stdio.h>
main(){
	int id;
	float charge,amount,unit,total;
	char name[20];
	
	printf("Enter id : ",id);
	scanf("%d",&id);
	
	printf("Enter name : ",name);
	scanf("%s",&name);
	
	printf("Enter electricity bill : ",unit);
	scanf("%f",&unit);
	
	if(unit < 350){
		charge = 1.20;
	}else if(unit >= 350 && unit < 600){
		charge = 1.50;
	}else if(unit >= 600 && unit < 800){
		charge = 1.80;
	}else{
		charge = 2.00;
	}
	total = unit * charge;
	
	if(total > 800){
		total += total*0.18;
	}
	if(total <= 256){
		total = 256;
	}
	
	printf("\n Your id :%d",id);
	printf("\n Your name :%s",name);
	printf("\n Unit consumed :%.2f",unit);
	printf("\n charge per unit :%.2f",charge);
	printf("\n total :%.2f",total);
}
