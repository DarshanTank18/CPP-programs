// Write a program in C to separate individual characters from a string.
#include<stdio.h>
main(){
	char str[100];
	int i;
	
	printf("Enter string:");
	scanf("%s",&str);
	
	printf("individual character of the string is:\n");
	
	for(i=0;str[i] != '\0';i++){
		printf("%c\n",str[i]);
	}	
}
