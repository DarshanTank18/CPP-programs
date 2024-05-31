// Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
main(){
	char str[100];
	int l=0,i;
	
	printf("Enter string:");
	scanf("%s",&str);
	
	while(str[l] != '\0'){
		l++;
	}
	printf("length of the string:%d\n",l);
}
