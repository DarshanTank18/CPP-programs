// Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	char a;
	
	printf("Enter character :",a);
	scanf("%c",&a);
	
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
		printf("Character is Vowel");
	}else{
		printf("Character is not Vowel");
	}
}
