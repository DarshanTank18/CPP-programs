// Pro - 5
#include<stdio.h>
main(){
	FILE *f1;
	FILE *f2;
	int d1,d2;
	
	f1 = fopen ("Pro - 5-1.txt","r");
	f2 = fopen ("Pro - 5-1.txt","r");
	
	if(f1 == NULL || f2 == NULL){
		printf("Cannot read file..");
	}else{
		d1 = getc(f1);
		d2 = getc(f2);
		
		while (d1!=EOF && d2!=EOF){
			d1 = getc(f1);
	     	d2 = getc(f2);
		}
	}
	if(d1==d2){
		printf("Files are equal!..");
	}else if(d1!=d2){
		printf("\nFiles are not equal!..");
	}else{
		printf("\nSome crap occured!");
	}
	fclose(f1);
	fclose(f2);
}
