// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
main(){
	int a[5],b[5],i,j,temp;
	
	printf("Enter array one elements :\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter array two elements :\n");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		if(b[i]>b[j]){
			    temp=b[i];
				b[i]=b[j];
				b[j]=temp;
		    }
		}
	}
	
	printf("increasing order of array one :");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("increasing order of array two :");
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
    }
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		}
		if(b[i]<b[j]){
			    temp=b[i];
				b[i]=b[j];
				b[j]=temp;
		}
	}
}
    printf("\ndecreasing order of array one :");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\ndecreasing order of array two :");
	for(i=0;i<5;i++){
			for(i=0;i<5;i++){
		    printf("%d ",b[i]);
		}
	}
}

