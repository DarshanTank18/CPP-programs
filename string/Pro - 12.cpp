// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include<stdio.h>
main(){
	char s[1000],word[100]="is";
	int count=0,i;
	
	printf("Enter a string :");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='i' && s[i+1]=='s'){
			count++;
		}
		
	}
	printf("\nTotal number : %d",count);
}
