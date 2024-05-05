// Convert country’s name in abbreviate form

#include<stdio.h>
main(){
	char ch,prevchar = ' ';
	printf("Enter country name : ");
	
	while((ch = getchar()) != '\n'){
		if(prevchar == ' '){
			printf("%c",ch);
		}
		prevchar = ch;
	}
	printf("\n");
}
