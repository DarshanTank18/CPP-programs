// C Program to Check Uppercase or Lowercase or Digit or Special Character.

#include<stdio.h>
main()
{
	char ch;
	printf("enter Character :");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("Uppercase");
	}else if(ch >= 'a' && ch <= 'z')
	{
		printf("Lowercase");
	}else
	{
		printf("Special Character");
	}
}
