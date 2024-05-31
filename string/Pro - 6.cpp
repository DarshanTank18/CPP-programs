// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
main()
{
	char s[100];
	int al=0,d=0,sp=0,i;
	
	printf("Enter a string:");
	scanf("%s",&s);
	
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			al++;
		}
		else if(s[i]>='0' && s[i]<='9'){
			d++;
		}
		else{
			sp++;
		}
	}
	printf("\nTotal number of alphabets :%d",al);
	printf("\nTotal number of digits :%d",d);
	printf("\nTotal number of special characters :%d",sp);
}
