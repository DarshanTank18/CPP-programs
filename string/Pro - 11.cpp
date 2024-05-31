// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include<stdio.h>
main() {
	char abc[1000];
	int i=0;
	
	printf("Enter the sentence : ");
	gets(abc);
	
	while(abc[i]){
		if(abc[i] >='a' && abc[i]<='z'){
			abc[i] -= 32;
		}
		else if(abc[i] >='A' && abc[i]<='Z'){
			abc[i] += 32;
		}
		i++;
	}
	printf("Coverted in capital : %s",abc);
}
