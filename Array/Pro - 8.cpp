// WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee
#include<stdio.h>
#include<string.h>
main(){
	char str[100];
	int i;
	
	printf("Enter a string : ");
	scanf("%s",&str);
	
	int len = strlen(str);
	int isPalindrome = 1;
	
	for(i=0;i<len/2;i++){
		if(str[i]!= str[len-i-1]){
			isPalindrome = 0;
			break;
		}
	}
	
	printf("Reverse string : ");
	
	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
	}
	
	if(isPalindrome){
		printf("\nString is Plaindrome.\n");
	}
	else{
		printf("\nString is not a palindrome.");
	}
}
