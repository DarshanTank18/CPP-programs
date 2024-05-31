// Write a program to find out the max number from given array using function
#include <stdio.h>
main(){
	int n,i;
  	int arr[100];
  	
  	printf("Enter number : ");
  	scanf("%d",&n);

	for(i=0;i<n;++i){
    	printf("Enter number%d: ", i + 1);
		scanf("%d",&arr[i]);
	}
		
  	for(i=1;i<n;++i){
    	if(arr[0] < arr[i]){
      	arr[0] = arr[i];
    	}
  	}

  	printf("Largest number : %d", arr[0]);
}

