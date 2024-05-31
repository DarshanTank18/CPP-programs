// Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
main(){
	
   	char s1[50],s2[50],Combined[100];
   	
   	printf("Enter first string:");
   	scanf("%s",s1);
   
   	printf("Enter second string:");
   	scanf("%s",s2);
   
   	strcpy(Combined,s1);
   	strcat(Combined," ");
   	strcat(Combined,s2);
   
   	printf("\nCombined string:%s",Combined);	
}
