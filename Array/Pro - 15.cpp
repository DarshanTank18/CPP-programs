// Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main(){
	int d[5],i,j,temp;
	
	printf("Enter array elements:\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&d[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(d[i]>d[j]){
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	
	printf("ascending order are:");
	
	for(i=0;i<5;i++){
		printf("%d",d
		[i]);
	}
}
