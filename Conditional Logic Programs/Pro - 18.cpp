//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main(){
	int cost,sell,pro,loss;
	
	printf("Enter product val. :",cost);
	scanf("%d",&cost);
	
	printf("Enter product sell val. :",sell);
	scanf("%d",&sell);
	
	pro = cost - sell;
	loss = sell - cost;
	
	if(pro < loss){
		printf("PROFIT. :%d",loss);
	}else{
		printf("LOSS :%d",pro);
	}
}
