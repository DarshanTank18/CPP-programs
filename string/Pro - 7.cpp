// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
main()
{
	char str[20],newstr[20];
	printf("Enter your name:");
	gets(str);
	printf("New string:%s",strcpy(newstr,str));
}
