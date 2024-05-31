// Write a program in C to find the maximum number of characters in a string
#include<stdio.h>
main(){
	char str[100];
	int length,i;
	
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='\n' && str[i]!=' '){
			length++;
		}
	}
	printf("number of string:%d",length);
}
